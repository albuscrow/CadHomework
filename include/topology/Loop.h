/*
 * Loop.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#pragma once
#include <topology/TopologyBase.h>
#include <boost/smart_ptr.hpp>
#include <topology/HalfEdge.h>
#include <topology/Face.h>
#include <string>

namespace cad {
class HalfEdge;
class Face;
class Loop;
typedef boost::shared_ptr<Loop> LoopPtr;
typedef boost::shared_ptr<HalfEdge> HalfEdgePtr;
typedef boost::shared_ptr<Face> FacePtr;
class Loop: public TopologyBase, public boost::enable_shared_from_this<Loop> {
private:
	HalfEdgePtr firstEdge;
	VertexPtr onlyPoint;

	FacePtr face;

public:
	Loop();
	virtual ~Loop();
	const HalfEdgePtr getFirstEdge() const;
	void setFirstEdge(const HalfEdgePtr firstEdge);
	const FacePtr getFace() const;
	void setFace(const FacePtr face);
	HalfEdgePtr findHalfEdgeByStartPoint(const PointPtr point);
	virtual std::string toString();
	const VertexPtr getOnlyPoint() const;
	void setOnlyPoint(const VertexPtr onlyPoint);
	void draw();
};

} /* namespace cad */
