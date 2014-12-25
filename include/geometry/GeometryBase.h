/*
 * GeometryBase.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#pragma once
#include <Root.h>

namespace cad{
class GeometryBase;
typedef boost::shared_ptr<GeometryBase> GeometryBasePtr;
class GeometryBase : public Root{
private:
public:
	GeometryBase();
	virtual ~GeometryBase();
	virtual void draw() = 0;
};
}
