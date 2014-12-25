/*
 * Root.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#pragma once
#include <boost/smart_ptr.hpp>
#include <string>

namespace cad{
class Root;
typedef boost::shared_ptr<Root> RootPtr;
class Root {
protected:
	long id;
private:
	static long currentMaxId;
public:
	Root();
	virtual ~Root();
	long getId() const;
	void setId(long id);
	static long genId();
	virtual int equal(const RootPtr root);
	virtual std::string toString();
};
}
//long cad::Root::currentMaxId = 0;
