/*
 * Curve.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#include <geometry/Curve.h>
#include <GL/glut.h>

namespace cad {

Curve::Curve() {
	// TODO Auto-generated constructor stub

}

Curve::~Curve() {
	// TODO Auto-generated destructor stub
}

const EdgePtr Curve::getEdge() const {
	return edge;
}

void Curve::setEdge(const EdgePtr edge) {
	this->edge = edge;
}

void Curve::draw(){
    glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_LINES);
	edge->getHalfEdge1()->getStartVertex()->getPoint()->drawPoint();
	edge->getHalfEdge1()->getEndVertex()->getPoint()->drawPoint();
	glEnd();
}
} /* namespace cad */
