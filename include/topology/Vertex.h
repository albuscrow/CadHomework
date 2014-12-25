/*
 * Vertex.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#pragma once
#include <boost/smart_ptr.hpp>
#include <topology/TopologyBase.h>
#include <geometry/Point.h>
#include <topology/HalfEdge.h>

namespace cad{
class Vertex;
class HalfEdge;
typedef boost::shared_ptr<Vertex> VertexPtr;
typedef boost::shared_ptr<HalfEdge> HalfEdgePtr;
class Vertex:public TopologyBase{
private:
	PointPtr point;
	HalfEdgePtr halfEdge;

public:
	Vertex(const PointPtr point);
	const PointPtr getPoint() const;
	void setPoint(const PointPtr point);
	const HalfEdgePtr& getHalfEdge() const;
	void setHalfEdge(const HalfEdgePtr& halfEdge);
	virtual std::string toString();
};
}

