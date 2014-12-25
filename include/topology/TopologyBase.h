/*
 * TopologyBase.h
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#pragma once
#include <Root.h>
#include <boost/smart_ptr.hpp>

namespace cad{
class TopologyBase;
typedef boost::shared_ptr<TopologyBase> TopologyBasePtr;
class TopologyBase:public Root{
private:
	TopologyBasePtr prev;
	TopologyBasePtr next;

public:
	TopologyBase();
	virtual ~TopologyBase();

	const TopologyBasePtr getNext() const;
	void setNext(const TopologyBasePtr next);

	const TopologyBasePtr getPrev() const;
	void setPrev(const TopologyBasePtr prev);
};

}
