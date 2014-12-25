/*
 * Surface.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */

#pragma once
#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) \
 || defined(__TOS_WIN__) || defined(__WINDOWS__)
/* Compiling for Windows */
#ifndef __WINDOWS__
#define __WINDOWS__
#endif
#  include <windows.h>
#endif/* Predefined Windows macros */
#include <geometry/GeometryBase.h>
#include <topology/Face.h>

namespace cad {
class Surface;
typedef boost::shared_ptr<Surface> SurfacePtr;
class Surface: public GeometryBase {
private:
	FacePtr face;
	float color[3];
public:
	Surface();
	virtual ~Surface();
	virtual void draw();
	const FacePtr getFace() const;
	void setFace(const FacePtr face);
};

} /* namespace cad */
