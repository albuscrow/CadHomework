/*
 * HalfEdge.h
 *
 *  Created on: Dec 10, 2014
 *      Author: albuscrow
 */
#pragma once
#include <boost/smart_ptr.hpp>
#include <topology/TopologyBase.h>
#include <topology/Vertex.h>
#include <topology/Edge.h>
#include <topology/Loop.h>
namespace cad {
class Loop;
class Edge;
class HalfEdge;
typedef boost::shared_ptr<HalfEdge> HalfEdgePtr;
typedef boost::shared_ptr<Edge> EdgePtr;
typedef boost::shared_ptr<Loop> LoopPtr;

class HalfEdge : public TopologyBase, public boost::enable_shared_from_this<HalfEdge> {
private:
	VertexPtr startVertex;
	VertexPtr endVertex;

	HalfEdgePtr parter;
	EdgePtr edge;

	LoopPtr loop;

public:
	HalfEdge(const VertexPtr startVertex, const VertexPtr endVertex);
	const EdgePtr getEdge() const;
	void setEdge(const EdgePtr edge);
	const VertexPtr getEndVertex() const;
	void setEndVertex(const VertexPtr endVertex);
	const HalfEdgePtr getParter() const;
	void setParter(const HalfEdgePtr parter);
	const VertexPtr getStartVertex() const;
	void setStartVertex(const VertexPtr startVertex);
	const LoopPtr getLoop() const;
	void setLoop(const LoopPtr loop);
	virtual std::string toString();
	virtual int equal(HalfEdgePtr halfEdge);
	int inTheSameLoop(HalfEdgePtr halfEdge);
};
}


