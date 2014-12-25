/*
 * SolidSet.h
 *
 *  Created on: Dec 13, 2014
 *      Author: albuscrow
 */

#ifndef SOLIDSET_H_
#define SOLIDSET_H_

#include <map>
#include <Root.h>
#include <topology/Solid.h>
#include <boost/smart_ptr.hpp>

namespace cad {
class SolidSet;
typedef boost::shared_ptr<SolidSet> SolidSetPtr;
class SolidSet: public Root {
private:
	std::map<long, SolidPtr> solids;
public:
	void addSolid(SolidPtr solid);
	void remove(long solidId);
	const SolidPtr findSolidById(long solidId);
	void draw();

	SolidSet();
	virtual ~SolidSet();
};

} /* namespace cad */

#endif /* SOLIDSET_H_ */
