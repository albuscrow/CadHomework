/*
 * Solid.cpp
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */

#include <topology/Solid.h>

namespace cad {

Solid::Solid():
	vertexes(), edges(), faces(){
}


void Solid::addEdge(const EdgePtr edge) {
	edges[edge->getId()] = edge;
}

void Solid::addFace(const FacePtr face) {
	faces[face->getId()] = face;
}

Solid::~Solid() {
}


void Solid::addVerTex(const VertexPtr vertex) {
	vertexes[vertex->getId()] = vertex;
}

EdgePtr Solid::findEdge(long id) const {
	return edges.at(id);
}

FacePtr Solid::findFace(long id) const {
	return faces.at(id);
}

VertexPtr Solid::findVertex(long id) const {
	return vertexes.at(id);
}

void Solid::removeEdge(const EdgePtr edge) {
	edges.erase(edge->getId());
}

void Solid::removeFave(const FacePtr face) {
	faces.erase(face->getId());
}

void Solid::removeVertex(const VertexPtr vertex) {
	vertexes.erase(vertex->getId());
}

void cad::Solid::mapOnEdge(void (*fun)(EdgePtr edges)) {

	for(const auto& edge : edges){
		fun(edge.second);
	}
}

void cad::Solid::mapOnFace(void (*fun)(FacePtr face)) {

	for(const auto& edge : faces){
		fun(edge.second);
	}
}

}
/* namespace cad */
