/*
 * Point.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#pragma once
#include <boost/smart_ptr.hpp>
#include <geometry/GeometryBase.h>
#include <map>

namespace cad{
class Point;
typedef boost::shared_ptr<Point> PointPtr;
class Point : public GeometryBase{
private:
	float x;
	float y;
	float z;
	static std::map<const long, PointPtr> allPoint;
	double coord[6];

public:
	Point(float x, float y, float z);
	Point();
	virtual void draw();
	virtual ~Point();
	float getX() const;
	void setX(float x);
	float getY() const;
	void setY(float y);
	float getZ() const;
	void setZ(float z);
	static PointPtr genNewPoint(float x, float y, float z);
	static PointPtr genNewPoint(const PointPtr base, const PointPtr vector);
	static PointPtr genNewPoint();
	static PointPtr findPoint(float x, float y, float z);
	virtual int equal(const PointPtr point);
	void drawPoint();
	virtual std::string toString();

	double* getCoord();
};

}
