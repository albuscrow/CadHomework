/*
 * Root.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: albuscrow
 */
#include <Root.h>
namespace cad{
long Root::currentMaxId = 0;
long Root::getId() const {
	return id;
}

void Root::setId(long id) {
	this->id = id;
}

long Root::genId() {
	return ++currentMaxId;
}

Root::Root() {
	id = genId();
}

Root::~Root(){

}

int Root::equal(const RootPtr root) {
	return id == root->getId();
}

std::string Root::toString() {
	return "";
}

}

