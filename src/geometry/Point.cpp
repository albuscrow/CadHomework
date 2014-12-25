/*
 * Point.cpp
 *
 *  Created on: Dec 10, 2014
 *      Author: albuscrow
 */
#include <geometry/Point.h>
#include <GL/glut.h>
#include <sstream>

namespace cad{

std::map<const long, PointPtr> Point::allPoint;

Point::Point(float x, float y, float z):
    x(x), y(y), z(z){
	coord[0] = x;
	coord[1] = y;
	coord[2] = z;
};

Point::Point():
    x(0), y(0), z(0){
};

float Point::getX() const {
	return x;
}

void Point::setX(float x) {
	this->x = x;
}

float Point::getY() const {
	return y;
}

void Point::setY(float y) {
	this->y = y;
}

float Point::getZ() const {
	return z;
}

void Point::setZ(float z) {
	this->z = z;
}

Point::~Point(){

}

void Point::draw(){
	//TODO
}

PointPtr Point::genNewPoint(float x, float y, float z) {
	PointPtr p1 = findPoint(x, y, z);
	if (p1.get() == NULL) {
		p1 = PointPtr(new Point(x, y, z));
	}
	allPoint[p1->getId()] = p1;
	return allPoint.at(p1->getId());
}

PointPtr Point::findPoint(float x, float y, float z) {
	for(const auto& pair : allPoint){
		auto point = pair.second;
		if(point->getX() == x
				&& point->getY() == y
				&& point->getZ() == z){
			return point;
		}
	}
	return PointPtr(NULL);
}

int Point::equal(const PointPtr point) {
	return this->x == point->getX() && this->y == point->getY()
			&& this->z == point->getZ();
}

double* Point::getCoord() {
	return coord;
}

PointPtr Point::genNewPoint() {
	return genNewPoint(0, 0, 0);
}


PointPtr Point::genNewPoint(const PointPtr base, const PointPtr vector){
	return genNewPoint(base->getX() + vector->getX()
			,base->getY() + vector->getY()
			,base->getZ() + vector->getZ());
}

void Point::drawPoint(){
	glVertex3f(x, y, z);
}

std::string Point::toString(){
	std::ostringstream ss;
	ss << "x=" << x << " y=" << y << " z=" << z;
	return ss.str();
}
}
