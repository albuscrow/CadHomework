/*
 * Curve.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#pragma once
#include <geometry/GeometryBase.h>
#include <topology/Edge.h>
#include <geometry/Curve.h>


namespace cad {
class Curve;
class Edge;
typedef boost::shared_ptr<Curve> CurvePtr;
typedef boost::shared_ptr<Edge> EdgePtr;
class Curve: public GeometryBase {
	EdgePtr edge;
public:
	Curve();
	virtual ~Curve();
	virtual void draw();
	const EdgePtr getEdge() const;
	void setEdge(const EdgePtr edge);
};

} /* namespace cad */
