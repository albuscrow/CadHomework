/*
 * SolidSet.cpp
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */

#include "SolidSet.h"
#include <topology/Edge.h>

namespace cad {

SolidSet::SolidSet() {

}

void SolidSet::addSolid(SolidPtr solid) {
	solids[solid->getId()] = solid;
}

void SolidSet::remove(long solidId) {
	solids.erase(solidId);
}

const SolidPtr SolidSet::findSolidById(long solidId) {
	return solids[solidId];
}

void SolidSet::draw() {
	for(auto& pair : solids){
//	pair.second->mapOnFace([](FacePtr face){
//		face->getSurface()->draw();
//	});
		pair.second->mapOnEdge([](EdgePtr e){
			e->getCurve()->draw();
		});
	}

}

SolidSet::~SolidSet() {
	// TODO Auto-generated destructor stub
}

} /* namespace cad */

