/*
 * Edge.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#include <topology/Edge.h>
namespace cad {

const HalfEdgePtr Edge::getHalfEdge1() const {
	return halfEdge1;
}

void Edge::setHalfEdge1(const HalfEdgePtr halfEdge1) {
	this->halfEdge1 = halfEdge1;
}

const HalfEdgePtr Edge::getHalfEdge2() const {
	return halfEdge2;
}

const CurvePtr Edge::getCurve() const {
	return curve;
}

Edge::Edge(VertexPtr vertex1, VertexPtr vertex2) : curve(new Curve()) {
	this->halfEdge1 = HalfEdgePtr(new HalfEdge(vertex1, vertex2));
	this->halfEdge2 = HalfEdgePtr(new HalfEdge(vertex2, vertex1));
	this->halfEdge1->setParter(this->halfEdge2);
	this->halfEdge2->setParter(this->halfEdge1);

	this->halfEdge1->setNext(this->halfEdge2);
	this->halfEdge1->setPrev(this->halfEdge2);
	this->halfEdge2->setNext(this->halfEdge1);
	this->halfEdge2->setPrev(this->halfEdge1);
}

void Edge::setCurve(const CurvePtr curve) {
	this->curve = curve;
}

void Edge::setHalfEdge2(const HalfEdgePtr halfEdge2) {
	this->halfEdge2 = halfEdge2;
}

std::string Edge::toString() {
	return "half edge 1:" + halfEdge1->toString() + "\n"
			"half edge 2:"+ halfEdge2->toString() + "\n";

}

EdgePtr Edge::getSharedPtr() {
	return shared_from_this();
}

EdgePtr Edge::genNewEdge(VertexPtr vertex1, VertexPtr vertex2) {
	EdgePtr newEdge(new Edge(vertex1, vertex2));
	cad::EdgePtr sharedPtr = newEdge->getSharedPtr();
	newEdge->getHalfEdge1()->setEdge(sharedPtr);
	newEdge->getHalfEdge2()->setEdge(sharedPtr);
	newEdge->getCurve()->setEdge(sharedPtr);
	return newEdge;
}

}
