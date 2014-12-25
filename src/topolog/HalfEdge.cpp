/*
 * HalfEdge.cpp
 *
 *  Created on: Dec 10, 2014
 *      Author: albuscrow
 */
#include<topology/HalfEdge.h>
namespace cad{


const EdgePtr HalfEdge::getEdge() const {
	return edge;
}

void HalfEdge::setEdge(const EdgePtr edge) {
	this->edge = edge;
}

const VertexPtr HalfEdge::getEndVertex() const {
	return endVertex;
}

const HalfEdgePtr HalfEdge::getParter() const {
	return parter;
}

void HalfEdge::setParter(const HalfEdgePtr parter) {
	this->parter = parter;
}

const VertexPtr HalfEdge::getStartVertex() const {
	return startVertex;
}



const LoopPtr HalfEdge::getLoop() const {
	return loop;
}

HalfEdge::HalfEdge(const VertexPtr startVertex, const VertexPtr endVertex) {
	this->startVertex = startVertex;
	this->endVertex = endVertex;
}

void HalfEdge::setEndVertex(const VertexPtr endVertex) {
	this->endVertex = endVertex;
}

void HalfEdge::setStartVertex(const VertexPtr startVertex) {
	this->startVertex = startVertex;
}

void HalfEdge::setLoop(const LoopPtr loop) {
	this->loop = loop;
}

std::string HalfEdge::toString() {
	return "start from " + startVertex->toString()
			+ " end at " + endVertex->toString();
}

int HalfEdge::equal(HalfEdgePtr halfEdge) {
	return id == halfEdge->getId();
}

int HalfEdge::inTheSameLoop(HalfEdgePtr halfEdge) {
	HalfEdgePtr thisPtr =  shared_from_this();
	HalfEdgePtr currentHalfEdge = thisPtr;
	do {
		if(currentHalfEdge->equal(halfEdge)){
			return true;
		}
		currentHalfEdge = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentHalfEdge->getNext());
	} while (!currentHalfEdge->equal(thisPtr));
	return true;
}

}


