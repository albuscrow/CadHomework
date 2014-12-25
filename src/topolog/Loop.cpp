/*
 * Loop.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#include "topology/Loop.h"
#include <sstream>
#include <GL/glut.h>

namespace cad {

Loop::Loop() {
	// TODO Auto-generated constructor stub

}

Loop::~Loop() {
	// TODO Auto-generated destructor stub
}

const HalfEdgePtr Loop::getFirstEdge() const {
	return firstEdge;
}

void Loop::setFirstEdge(const HalfEdgePtr firstEdge) {
	this->firstEdge = firstEdge;

	if (firstEdge.get()) {
		HalfEdgePtr currentEdge = this->firstEdge;
		do{
			currentEdge->setLoop(shared_from_this());
			currentEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentEdge->getNext());
		}while(!currentEdge->equal(this->firstEdge));
	}
}

const FacePtr Loop::getFace() const {
	return face;
}

void Loop::setFace(const FacePtr face) {
	this->face = face;
}

HalfEdgePtr Loop::findHalfEdgeByStartPoint(const PointPtr point) {
	if (firstEdge.get() == NULL) {
		if(onlyPoint.get() == NULL){
			return HalfEdgePtr(NULL);
		}else{
			if(onlyPoint->getPoint()->equal(point)){
				return HalfEdgePtr(new HalfEdge(VertexPtr(new Vertex(point)), VertexPtr(new Vertex(point))));
			}else{
				return HalfEdgePtr(NULL);
			}
		}
	}

	HalfEdgePtr currentEdge = this->firstEdge;

	do{
		if (currentEdge->getStartVertex()->getPoint()->equal(point)) {
			return currentEdge;
		}
		currentEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentEdge->getNext());
	}while(!currentEdge->equal(this->firstEdge));
	return HalfEdgePtr(NULL);
}

const VertexPtr Loop::getOnlyPoint() const {
	return onlyPoint;
}

void Loop::setOnlyPoint(const VertexPtr onlyPoint) {
	this->onlyPoint = onlyPoint;
}

std::string Loop::toString() {

	if (firstEdge.get() == NULL) {
		return "";
	}

	HalfEdgePtr currentEdge = this->firstEdge;
	int i = 0;
	std::ostringstream oss;
	do{
		oss << ++i <<": " << currentEdge->toString() << "\n";
		currentEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentEdge->getNext());
	}while(!currentEdge->equal(this->firstEdge));

	return oss.str();
}

void Loop::draw() {

	glColor3f((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0);
	HalfEdgePtr currentEdge = this->firstEdge;
	glBegin(GL_POLYGON);
	do{
		currentEdge->getStartVertex()->getPoint()->drawPoint();
		currentEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentEdge->getNext());
	}while(!currentEdge->equal(this->firstEdge));
	glEnd();
}

} /* namespace cad */
