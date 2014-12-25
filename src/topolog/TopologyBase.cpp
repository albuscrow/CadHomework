/*
 * TopologyBase.cpp
 *
 *  Created on: Dec 10, 2014
 *      Author: albuscrow
 */
#include <topology/TopologyBase.h>

namespace cad{

TopologyBase::TopologyBase(){
}

TopologyBase::~TopologyBase(){
}

const TopologyBasePtr TopologyBase::getNext() const {
	return next;
}

void TopologyBase::setNext(const TopologyBasePtr next) {
	this->next = next;
}

const TopologyBasePtr TopologyBase::getPrev() const {
	return prev;
}

void TopologyBase::setPrev(const TopologyBasePtr prev) {
	this->prev = prev;
}
}
