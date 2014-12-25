/*
 * Edge.h
 *
 *  Created on: Dec 10, 2014
 *      Author: albuscrow
 */
#pragma once
#include <boost/smart_ptr.hpp>
#include <topology/TopologyBase.h>
#include <topology/HalfEdge.h>
#include <geometry/Curve.h>
#include <topology/Vertex.h>


namespace cad {
class HalfEdge;
class Edge;
class Vertex;
class Curve;
typedef boost::shared_ptr<Edge> EdgePtr;
typedef boost::shared_ptr<HalfEdge> HalfEdgePtr;
typedef boost::shared_ptr<Vertex> VertexPtr;
typedef boost::shared_ptr<Curve> CurvePtr;

class Edge : public TopologyBase , public boost::enable_shared_from_this<Edge>{
private:
	HalfEdgePtr halfEdge1;
	HalfEdgePtr halfEdge2;

	CurvePtr curve;

public:
	Edge(VertexPtr vertex1, VertexPtr vertex2);
	const HalfEdgePtr getHalfEdge1() const;
	void setHalfEdge1(const HalfEdgePtr halfEdge1);
	const HalfEdgePtr getHalfEdge2() const;
	void setHalfEdge2(const HalfEdgePtr halfEdge2);
	const CurvePtr getCurve() const;
	void setCurve(const CurvePtr curve);
	virtual std::string toString();

	EdgePtr getSharedPtr();
	static EdgePtr genNewEdge(VertexPtr vertex1, VertexPtr vertex2);
};
}



