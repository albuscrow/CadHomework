#include <boost/smart_ptr.hpp>
#include <string>
#include <geometry/Point.h>
#include <GL/glut.h>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <SolidSet.h>
#include <EulerOperator.h>
#include <topology/Solid.h>
#include <iostream>

using boost::shared_ptr;
using std::string;
using cad::Point;
using std::cout;
using std::endl;
using std::sin;
using std::cos;


static int rotateX=0, rotateY, oldmy=-1,oldmx=-1; //du是视点绕y轴的角度,opengl里默认y轴是上方向
static float zDistance=3.0f; //r是视点绕y轴的半径,h是视点高度即在y轴上的坐标


void init();
void display();
void onMouseMove(int x,int y);
void mouse(int button, int state, int x,int y);
void reshape(int width, int height);

cad::SolidSetPtr solidSet(new cad::SolidSet());
int main(int argc, char* argv[]) {
	//test
	//构造一个实体
	cad::PointPtr p1 = Point::genNewPoint(0, 0, 1);
	cad::FacePtr face;
	cad::VertexPtr vertex1;
	cad::SolidPtr solid1 = cad::EulerOperator::mvsf(p1, &face, &vertex1);
	solidSet->addSolid(solid1);

	//3此mev，1次mef，得到两个正方形平面
	cad::PointPtr p2 = Point::genNewPoint(1, 0, 0);
	cad::EulerOperator::mev(p2, p1, face, NULL);
	cad::PointPtr p3 = Point::genNewPoint(0, 0, -1);
	cad::EulerOperator::mev(p3, p2, face, NULL);
	cad::PointPtr p4 = Point::genNewPoint(-1, 0, 0);
	cad::EulerOperator::mev(p4, p3, face, NULL);
	cad::FacePtr face1 =  cad::EulerOperator::mef(p4, p1, face, NULL);

	//四次mev，四次mef，得到一个正方体
	cad::PointPtr p5 = Point::genNewPoint(0, 1, 1);
	cad::EulerOperator::mev(p5, p1, face, NULL);
	cad::PointPtr p6 = Point::genNewPoint(1, 1, 0);
	cad::EulerOperator::mev(p6, p2, face, NULL);
	cad::PointPtr p7 = Point::genNewPoint(0, 1, -1);
	cad::EulerOperator::mev(p7, p3, face, NULL);
	cad::PointPtr p8 = Point::genNewPoint(-1, 1, 0);
	cad::EulerOperator::mev(p8, p4, face, NULL);

	cad::FacePtr face2 =  cad::EulerOperator::mef(p5, p6, face, NULL);
	cad::FacePtr face3 =  cad::EulerOperator::mef(p6, p7, face, NULL);
	cad::FacePtr face4 =  cad::EulerOperator::mef(p7, p8, face, NULL);
	cad::FacePtr face5 =  cad::EulerOperator::mef(p8, p5, face, NULL);


//new
cad::PointPtr pp9 = Point::genNewPoint(-0.1f, 1, 0.0);
cad::EdgePtr edge2(NULL);
cad::EulerOperator::mev(pp9, p5, face, &edge2);
cad::EulerOperator::kemr(edge2);

cad::PointPtr pp10 = Point::genNewPoint(-0.49, 1, 0.5f);
cad::EulerOperator::mev(pp10, pp9, face, NULL);
cad::PointPtr pp11 = Point::genNewPoint(-0.95 , 1, 0.0);
cad::EulerOperator::mev(pp11, pp10, face, NULL);
cad::PointPtr pp12 = Point::genNewPoint(-0.49, 1, -0.5);
cad::EulerOperator::mev(pp12, pp11, face, NULL);
cad::FacePtr facep6 = cad::EulerOperator::mef(pp12, pp9, face, NULL);


//打一个孔
cad::PointPtr pp13 = Point::genNewPoint(-0.1f, 0, 0.0);
cad::EulerOperator::mev(pp13, pp9, facep6, NULL);

cad::PointPtr pp14 = Point::genNewPoint(-0.49, 0, 0.5f);
cad::EulerOperator::mev(pp14, pp10, facep6, NULL);

cad::PointPtr pp15 = Point::genNewPoint(-0.95 , 0, 0.0);
cad::EulerOperator::mev(pp15, pp11, facep6, NULL);

cad::PointPtr pp16 = Point::genNewPoint(-0.49, 0, -0.5);
cad::EulerOperator::mev(pp16, pp12, facep6, NULL);

cad::EulerOperator::mef(pp14, pp13, facep6, NULL);
cad::EulerOperator::mef(pp15, pp14, facep6, NULL);
cad::EulerOperator::mef(pp16, pp15, facep6, NULL);
cad::EulerOperator::mef(pp13, pp16, facep6, NULL);

cad::EulerOperator::kfmrh(face1, facep6);
//new


	//再正方体顶面构造一个环
cad::PointPtr p9 = Point::genNewPoint(0.95f, 1, 0);
cad::EdgePtr edge(NULL);
cad::EulerOperator::mev(p9, p5, face, &edge);
cad::EulerOperator::kemr(edge);

cad::PointPtr p10 = Point::genNewPoint(0.5, 1, 0.4f);
cad::EulerOperator::mev(p10, p9, face, NULL);
cad::PointPtr p11 = Point::genNewPoint(0, 1, 0);
cad::EulerOperator::mev(p11, p10, face, NULL);
cad::PointPtr p12 = Point::genNewPoint(0.5 , 1, -0.4);
cad::EulerOperator::mev(p12, p11, face, NULL);
cad::FacePtr face6 = cad::EulerOperator::mef(p12, p9, face, NULL);

//打一个孔
cad::PointPtr p13 = Point::genNewPoint(0.95f, 0, 0);
cad::EulerOperator::mev(p13, p9, face6, NULL);

cad::PointPtr p14 = Point::genNewPoint(0.5, 0, 0.4f);
cad::EulerOperator::mev(p14, p10, face6, NULL);

cad::PointPtr p15 = Point::genNewPoint(0, 0, 0);
cad::EulerOperator::mev(p15, p11, face6, NULL);

cad::PointPtr p16 = Point::genNewPoint(0.5, 0, -0.4f);
cad::EulerOperator::mev(p16, p12, face6, NULL);

cad::EulerOperator::mef(p14, p13, face6, NULL);
cad::EulerOperator::mef(p15, p14, face6, NULL);
cad::EulerOperator::mef(p16, p15, face6, NULL);
cad::EulerOperator::mef(p13, p16, face6, NULL);

cad::EulerOperator::kfmrh(face1, face6);

////以顶上的那个面为扫成用的面，向斜上方作一次扫成操作
cad::PointPtr p17 = Point::genNewPoint(0.2, 0.5, 0.2);
cad::EulerOperator::sweep(face, p17);

	//opengl
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);

	glutCreateWindow("euler operator");

	init();
	glutReshapeFunc(&reshape);
	glutDisplayFunc(&display);
	glutMotionFunc(&onMouseMove);
	glutMouseFunc(&mouse);

	glutMainLoop();
	return 0;
}

void init() {
	glClearColor(0.5,0.5,0.5, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-5, 5, -5, 5, 5, 15);
	glMatrixMode(GL_MODELVIEW);
//	gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
	glEnable(GL_DEPTH_TEST);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.5,0.5,0.5, 0.0);
    glLoadIdentity();

    gluLookAt(-zDistance, 1, 0, 0, 0, 0, 0, 1, 0); //从视点看远点,y轴方向(0,1,0)是上方向

    glRotatef(rotateX, 0, 1, 0);
    glRotatef(rotateY, 0, 0, 1);

    glColor3f(1.0f, 0.0f, 0.0f);
//    glutWireTeapot(0.5f);
    solidSet->draw();

    glFlush();
    glutSwapBuffers();
}

void onMouseMove(int x,int y) //处理鼠标拖动
{
    rotateX += x-oldmx; //鼠标在窗口x轴方向上的增量加到视点绕y轴的角度上，这样就左右转了
    rotateY += y-oldmy; //鼠标在窗口y轴方向上的改变加到视点的y坐标上，就上下转了
    oldmx=x,oldmy=y; //把此时的鼠标坐标作为旧值，为下一次计算增量做准备
    glutPostRedisplay();
}

//处理鼠标点击
void mouse(int button, int state, int x, int y) {
	//第一次鼠标按下时,记录鼠标在窗口中的初始坐标
    if(state==GLUT_DOWN) {
        oldmx=x,oldmy=y;
    }
}

void reshape(int w,int h) {
    glViewport( 0, 0, w, h );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluPerspective(75.0f, (float)w/h, 1.0f, 1000.0f);
    glMatrixMode(GL_MODELVIEW);
}
