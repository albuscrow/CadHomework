/*
 * Face.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#include <topology/Face.h>
#include <topology/Solid.h>

namespace cad {

Face::Face():
	loops(),surface(new Surface()),solid(NULL){
}

const SurfacePtr Face::getSurface() const {
	return surface;
}

const SolidPtr Face::getSolid() const {
	return solid;
}

void Face::setSolid(const SolidPtr solid) {
	this->solid = solid;
}

void Face::setSurface(const SurfacePtr curve) {
	this->surface = curve;
}

Face::~Face() {
	// TODO Auto-generated destructor stub
}

void Face::addLoop(const LoopPtr loop) {
	loops[loop->getId()] = loop;
}

LoopPtr Face::findLoop(long id) {
	return loops.at(id);
}

HalfEdgePtr Face::findHalfEdgeByStartPoint(const PointPtr point, LoopPtr* loop) {
	for(const auto& loopIter : loops){
		cad::HalfEdgePtr halfEdge = loopIter.second->findHalfEdgeByStartPoint(point);
		if (halfEdge.get() != NULL) {
			(*loop) = loopIter.second;
			return halfEdge;
		}
	}
	(*loop) = LoopPtr(NULL);
	return HalfEdgePtr(NULL);
}

void Face::addLoops(const FacePtr face) {
	for(const auto& iter:face->getLoops()){
		this->loops.insert(iter);
	}
}

void Face::removeLoop(const LoopPtr loop) {
	this->loops.erase(loop->getId());
}

std::map<long, LoopPtr>& Face::getLoops() {
	return loops;
}

std::string Face::toString() {
	std::string res = "";
	for(const auto& loopIter : loops){
		res += loopIter.second->toString() + "\n";
	}
	return res;
}

const LoopPtr Face::getOutLoop() const {
	return outLoop;
}

void Face::setOutLoop(const LoopPtr outLoop) {
	this->outLoop = outLoop;
}

FacePtr Face::genFace() {
	FacePtr face(new Face());
	face->getSurface()->setFace(face);
	return face;
}

} /* namespace cad */
