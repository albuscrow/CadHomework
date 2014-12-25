/*
 * Vertex.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#include <topology/Vertex.h>
namespace cad{

const PointPtr Vertex::getPoint() const {
	return point;
}

Vertex::Vertex(const PointPtr point) {
	this->point = point;
}

const HalfEdgePtr& Vertex::getHalfEdge() const {
	return halfEdge;
}

void Vertex::setHalfEdge(const HalfEdgePtr& halfEdge) {
	this->halfEdge = halfEdge;
}

void Vertex::setPoint(const PointPtr point) {
	this->point = point;
}

std::string Vertex::toString() {
	return point->toString();
}

}


