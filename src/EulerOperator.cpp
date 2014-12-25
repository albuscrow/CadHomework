/*
 * EulerOperator.cpp
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */

#include "EulerOperator.h"
#include <iostream>
#include <vector>

namespace cad {

EulerOperator::EulerOperator() {
	// TODO Auto-generated constructor stub

}

EulerOperator::~EulerOperator() {
	// TODO Auto-generated destructor stub
}


SolidPtr EulerOperator::mvsf(const PointPtr point, FacePtr *outFace, VertexPtr *outVertex) {
	SolidPtr solid(new Solid());
	VertexPtr vertex(new Vertex(point));
	solid->addVerTex(vertex);

	FacePtr face = cad::Face::genFace();
	face->setSolid(solid);
	solid->addFace(face);

	LoopPtr loop(new Loop());
	loop->setFace(face);
	loop->setOnlyPoint(vertex);
	loop->setFirstEdge(HalfEdgePtr(NULL));
	face->addLoop(loop);
	face->setOutLoop(loop);

	if (outFace != NULL) {
		*outFace = face;
	}

	if(outVertex != NULL){
		*outVertex = vertex;
	}


	return solid;
}

VertexPtr EulerOperator::mev(const PointPtr newPoint, const PointPtr oldPoint, const FacePtr face, EdgePtr* outEdge) {
	BOOST_ASSERT(face.get() != NULL);

	LoopPtr loop(NULL);
	HalfEdgePtr halfEdge = face->findHalfEdgeByStartPoint(oldPoint, &loop);
	BOOST_ASSERT(halfEdge.get() != NULL);

	const cad::SolidPtr solid = face->getSolid();
	VertexPtr newVertex(new Vertex(newPoint));
	solid->addVerTex(newVertex);

	if(halfEdge->getStartVertex()->getPoint()->equal(halfEdge->getEndVertex()->getPoint())){
		VertexPtr oldVertex(new Vertex(oldPoint));

		EdgePtr newEdge = cad::Edge::genNewEdge(oldVertex, newVertex);
		solid->addEdge(newEdge);

		loop->setFace(face);
		loop->setFirstEdge(newEdge->getHalfEdge1());
		loop->setOnlyPoint(VertexPtr(NULL));

		face->addLoop(loop);

		if(outEdge != NULL){
			*outEdge = newEdge;
		}
	}else{
		VertexPtr oldVertex = halfEdge->getStartVertex();

		EdgePtr newEdge = cad::Edge::genNewEdge(oldVertex, newVertex);

		solid->addEdge(newEdge);

		const cad::HalfEdgePtr halfEdge1 = newEdge->getHalfEdge1();
		halfEdge1->setLoop(loop);
		const cad::HalfEdgePtr halfEdge2 = newEdge->getHalfEdge2();
		halfEdge2->setLoop(loop);

		halfEdge->getPrev()->setNext(halfEdge1);
		halfEdge1->setPrev(halfEdge->getPrev());

		halfEdge->setPrev(halfEdge2);
		halfEdge2->setNext(halfEdge);

		halfEdge1->setNext(halfEdge2);
		halfEdge2->setPrev(halfEdge1);

		if(outEdge != NULL){
			*outEdge = newEdge;
		}

	}


	return newVertex;

}

FacePtr EulerOperator::mef(const PointPtr point1, const PointPtr point2, const FacePtr face, EdgePtr* outEdge) {
	LoopPtr orignalLoop(NULL);
	HalfEdgePtr halfEdge1 = face->findHalfEdgeByStartPoint(point1, &orignalLoop);
	HalfEdgePtr halfEdge2 = face->findHalfEdgeByStartPoint(point2, &orignalLoop);
	BOOST_ASSERT(halfEdge1.get() != NULL);
	BOOST_ASSERT(halfEdge2.get() != NULL);
	BOOST_ASSERT(!point1->equal(point2));

	const cad::SolidPtr solid = face->getSolid();

	EdgePtr newEdge = cad::Edge::genNewEdge(halfEdge1->getStartVertex(), halfEdge2->getStartVertex());
	solid->addEdge(newEdge);

	FacePtr newFace = cad::Face::genFace();
	newFace->setSolid(solid);
	solid->addFace(newFace);

	LoopPtr newLoop(new Loop());
	newLoop->setFace(newFace);
	newFace->addLoop(newLoop);
	newFace->setOutLoop(newLoop);
	
	const cad::HalfEdgePtr newhalfEdge1 = newEdge->getHalfEdge1();
	const cad::HalfEdgePtr newhalfEdge2 = newEdge->getHalfEdge2();

	halfEdge1->getPrev()->setNext(newhalfEdge1);
	newhalfEdge1->setPrev(halfEdge1->getPrev());

	halfEdge1->setPrev(newhalfEdge2);
	newhalfEdge2->setNext(halfEdge1);

	halfEdge2->getPrev()->setNext(newhalfEdge2);
	newhalfEdge2->setPrev(halfEdge2->getPrev());

	halfEdge2->setPrev(newhalfEdge1);
	newhalfEdge1->setNext(halfEdge2);

	orignalLoop->setFirstEdge(newhalfEdge1);
	orignalLoop->setOnlyPoint(VertexPtr(NULL));
	newLoop->setFirstEdge(newhalfEdge2);
	newLoop->setOnlyPoint(VertexPtr(NULL));

	if (outEdge != NULL) {
		*outEdge = newEdge;
	}
//	std::cout << "mef result: new face: \n" << newFace->toString() << std::endl;
//	std::cout << "original face:\n" << face->toString() << std::endl;
	return newFace;
}

LoopPtr EulerOperator::kemr(const EdgePtr edge) {
	HalfEdgePtr halfEdge1 = edge->getHalfEdge1();
	HalfEdgePtr halfEdge2 = edge->getHalfEdge2();
	BOOST_ASSERT(halfEdge1->inTheSameLoop(halfEdge2));

	LoopPtr loop = halfEdge1->getLoop();
	FacePtr face = loop->getFace();
	SolidPtr solid = face->getSolid();

	LoopPtr newLoop(new Loop());
	newLoop->setFace(face);
	face->addLoop(newLoop);

	if(halfEdge1->getNext()->equal(halfEdge2)
			&& halfEdge2->getNext()->equal(halfEdge1)){
		//当前loop就包含两个半边
		newLoop->setOnlyPoint(halfEdge1->getStartVertex());
		newLoop->setFirstEdge(HalfEdgePtr(NULL));
		loop->setOnlyPoint(halfEdge2->getStartVertex());
		loop->setFirstEdge(HalfEdgePtr(NULL));
	}else if(halfEdge1->getNext()->equal(halfEdge2)){
		halfEdge1->getPrev()->setNext(halfEdge2->getNext());
		halfEdge2->getNext()->setPrev(halfEdge1->getPrev());

		loop->setFirstEdge(boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(halfEdge1->getPrev()));
		loop->setOnlyPoint(VertexPtr(NULL));

		newLoop->setFirstEdge(HalfEdgePtr(NULL));
		newLoop->setOnlyPoint(halfEdge1->getEndVertex());

	}else if(halfEdge2->getNext()->equal(halfEdge1)){
		halfEdge2->getPrev()->setNext(halfEdge1->getNext());
		halfEdge1->getNext()->setPrev(halfEdge2->getPrev());

		loop->setFirstEdge(boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(halfEdge1->getNext()));
		loop->setOnlyPoint(VertexPtr(NULL));

		newLoop->setFirstEdge(HalfEdgePtr(NULL));
		newLoop->setOnlyPoint(halfEdge1->getStartVertex());


	}else{
		halfEdge2->getPrev()->setNext(halfEdge1->getNext());
		halfEdge1->getNext()->setPrev(halfEdge2->getPrev());

		halfEdge1->getPrev()->setNext(halfEdge2->getNext());
		halfEdge2->getNext()->setPrev(halfEdge1->getPrev());

		loop->setFirstEdge(boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(halfEdge1->getPrev()));
		loop->setOnlyPoint(VertexPtr(NULL));
		newLoop->setFirstEdge(boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(halfEdge1->getNext()));
		newLoop->setOnlyPoint(VertexPtr(NULL));

	}
	solid->removeEdge(edge);
	return newLoop;
}

void EulerOperator::kfmrh(const FacePtr killedFace, const FacePtr newHostFace) {
	newHostFace->addLoops(killedFace);
	killedFace->getSolid()->removeFave(killedFace);
}

void EulerOperator::sweepSingleLoop(const LoopPtr loop,
		const PointPtr vector, const FacePtr face) {
	std::vector<PointPtr> oldPoints;

	HalfEdgePtr currentHalf = loop->getFirstEdge();
	do {
		oldPoints.push_back(currentHalf->getStartVertex()->getPoint());
		currentHalf = boost::dynamic_pointer_cast<HalfEdge, TopologyBase>(currentHalf->getNext());
	} while (!currentHalf->equal(loop->getFirstEdge()));

	std::vector<PointPtr> newPoints;
	for(const auto& iter : oldPoints){
		std::cout << iter->toString() << std::endl;
		PointPtr newPoint = Point::genNewPoint(iter, vector);
		mev(newPoint, iter, face, NULL);
		newPoints.push_back(newPoint);
	}
	std::vector<PointPtr>::size_type size = newPoints.size();
	for (int i = 0; i < size; ++i) {
		PointPtr point1 = newPoints[i];
		PointPtr point2 = newPoints[(i + 1) % size];
		mef(point1, point2, face, NULL);
	}
}

void EulerOperator::sweep(const FacePtr face, const PointPtr vector) {
	const cad::LoopPtr outLoop = face->getOutLoop();
	for(const auto& iter : face->getLoops()){
		LoopPtr loop = iter.second;
		sweepSingleLoop(loop, vector, face);
	}
}

} /* namespace cad */
