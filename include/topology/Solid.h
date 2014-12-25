/*
 * Solid.h
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */
#pragma once

#include <topology/TopologyBase.h>
#include <topology/Face.h>
#include <boost/smart_ptr.hpp>
#include <topology/Edge.h>
#include <map>


namespace cad {
class Face;
class Solid;
class Edge;
typedef boost::shared_ptr<Solid> SolidPtr;
typedef boost::shared_ptr<Face> FacePtr;
typedef boost::shared_ptr<Edge> EdgePtr;

class Solid: public TopologyBase {
private:
	std::map<long, FacePtr> faces;
	std::map<long, EdgePtr> edges;
	std::map<long, VertexPtr> vertexes;
public:
	Solid();
	virtual ~Solid();

	EdgePtr findEdge(long id) const;
	void addEdge(const EdgePtr edge);
	void removeEdge(const EdgePtr edge);

	FacePtr findFace(long id) const;
	void addFace(const FacePtr face);
	void removeFave(const FacePtr face);

	VertexPtr findVertex(long id) const;
	void addVerTex(const VertexPtr vertex);
	void removeVertex(const VertexPtr vertex);

	void mapOnEdge(void (*fun)(EdgePtr edges));
	void mapOnFace(void (*fun)(FacePtr face));
};

}
/* namespace cad */


