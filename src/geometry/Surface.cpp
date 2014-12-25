/*
 * Surface.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#include <geometry/Surface.h>
#include <cstdio>
#include <cstdlib>
#include <GL/glut.h>


namespace cad {

Surface::Surface() {
//	srand(3);
	color[0] = (rand() % 100) / 100.0;
	color[1] = (rand() % 100) / 100.0;
	color[2] = (rand() % 100) / 100.0;
}

Surface::~Surface() {
	delete[] color;
}
void vertexCallback(GLvoid *vertex)
{
    const GLdouble *pointer;
    pointer = (GLdouble *) vertex;
    glColor3dv(pointer + 3);//在此设置颜色
    glVertex3dv(pointer);
}

void beginCallback(GLenum which){
    glBegin(which);
}

void endCallback(){
    glEnd();
}

void errorCallback(GLenum errorCode){
    const GLubyte *estring;
    estring = gluErrorString(errorCode);
    fprintf(stderr, "Tessellation Error: %s\n", estring);
    exit(0);
}
void combineCallback(GLdouble coords[3],
    GLdouble *vertex_data[4],
    GLfloat weight[4], GLdouble **dataOut )
{
    GLdouble *vertex;
    int i;
    vertex = (GLdouble *) malloc(6 * sizeof(GLdouble));
    vertex[0] = coords[0];
    vertex[1] = coords[1];
    vertex[2] = coords[2];
    for (i = 3; i < 7; i++)
        vertex[i] = weight[0] * vertex_data[0][i]
    + weight[1] * vertex_data[1][i]
    + weight[2] * vertex_data[2][i]
    + weight[3] * vertex_data[3][i];
    *dataOut = vertex;
}


void Surface::draw() {

	LoopPtr outLoop = face->getOutLoop();

	glColor3f(1, 1, 1);
	GLUtesselator *tobj = gluNewTess();
	if(tobj == NULL){
		return;
	}
	gluTessCallback(tobj, GLU_TESS_VERTEX, (void(*)())&vertexCallback);
	gluTessCallback(tobj, GLU_TESS_BEGIN,  (void(*)())&beginCallback);
	gluTessCallback(tobj, GLU_TESS_END, (void(*)())&endCallback);
	gluTessCallback(tobj, GLU_TESS_ERROR, (void(*)())&errorCallback);
	gluTessCallback(tobj, GLU_TESS_COMBINE, (void(*)())&combineCallback);
	gluTessBeginPolygon(tobj, NULL);
	gluTessBeginContour(tobj);
	HalfEdgePtr currentHalfEdge = outLoop->getFirstEdge();
	do {
		double *coord = currentHalfEdge->getStartVertex()->getPoint()->getCoord();
		coord[3] = color[0];
		coord[4] = color[1];
		coord[5] = color[2];
		gluTessVertex(tobj, coord, coord);
		currentHalfEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentHalfEdge->getNext());
	} while (!currentHalfEdge->equal(outLoop->getFirstEdge()));
	gluTessEndContour(tobj);
	gluTessBeginContour(tobj);
	for(const auto& iter : face->getLoops()){
		if (iter.second->equal(outLoop)) {
			continue;
		}
		currentHalfEdge = iter.second->getFirstEdge();
		do {
			double *coord = currentHalfEdge->getStartVertex()->getPoint()->getCoord();
			gluTessVertex(tobj, coord, coord);
			currentHalfEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentHalfEdge->getNext());
		} while (!currentHalfEdge->equal(iter.second->getFirstEdge()));
	}
	gluTessEndContour(tobj);
	gluTessEndPolygon(tobj);
}

const FacePtr Surface::getFace() const {
	return face;
}

void Surface::setFace(const FacePtr face) {
	this->face = face;
}

} /* namespace cad */

