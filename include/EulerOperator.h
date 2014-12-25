/*
 * EulerOperator.h
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */
#pragma once

#include <topology/Solid.h>
#include <topology/Face.h>
#include <topology/Loop.h>
#include <topology/Edge.h>
#include <topology/Vertex.h>

namespace cad {

class EulerOperator {
private:
	static void sweepSingleLoop(const LoopPtr loop, const PointPtr vector, const FacePtr face);
public:
	EulerOperator();
	virtual ~EulerOperator();

	//euler 操作
	static SolidPtr mvsf(const PointPtr point,FacePtr *face, VertexPtr *vertex);
	static VertexPtr mev(const PointPtr newPoint, const PointPtr oldPoint, const FacePtr face, EdgePtr* outEdge);
	static FacePtr mef(const PointPtr point1, const PointPtr point2, const FacePtr face, EdgePtr* outEdge);
	static LoopPtr kemr(const EdgePtr edge);
	static void kfmrh(const FacePtr face, const FacePtr newHostFace);
	static void sweep(const FacePtr face, const PointPtr vector);
};

} /* namespace cad */
