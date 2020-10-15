//#pragma once
#ifndef _cNode_HG_
#define _cNode_HG_

#include "cPerson.h"
class cNode {
public:
	cNode() {
		this->pNextNode = NULL;
	}
	~cNode();

	cPerson thePerson;
	cNode* pNextNode;
};
#endif // !_cNode_HG_
