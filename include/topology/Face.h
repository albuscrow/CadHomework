/*
 * Face.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#pragma once

#include <topology/TopologyBase.h>
#include <topology/Loop.h>
#include <boost/smart_ptr.hpp>
#include <topology/Solid.h>
#include <geometry/Surface.h>
#include <map>
namespace cad {
class Loop;
class Solid;
class Face;
class Surface;
typedef boost::shared_ptr<Face> FacePtr;
typedef boost::shared_ptr<Loop> LoopPtr;
typedef boost::shared_ptr<Solid> SolidPtr;
typedef boost::shared_ptr<Surface> SurfacePtr;

class Face: public TopologyBase ,public boost::enable_shared_from_this<Face>{

private:
	std::map<long, LoopPtr> loops;
	SurfacePtr surface;
	SolidPtr solid;
	LoopPtr outLoop;

	Face();
public:
	virtual ~Face();

	void addLoop(const LoopPtr loop);
	void addLoops(const FacePtr face);
	std::map<long, LoopPtr>& getLoops();
	LoopPtr findLoop(long id);
	void removeLoop(const LoopPtr loop);

	const SurfacePtr getSurface() const;
	void setSurface(const SurfacePtr surface);

	const SolidPtr getSolid() const;
	void setSolid(const SolidPtr solid);

	HalfEdgePtr findHalfEdgeByStartPoint(const PointPtr, LoopPtr* loop);

	virtual std::string toString();

	static FacePtr genFace();
	const LoopPtr getOutLoop() const;
	void setOutLoop(const LoopPtr outLoop);
};

} /* namespace cad */

