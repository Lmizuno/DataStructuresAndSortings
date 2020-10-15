#pragma once
#ifndef _cNode_HG_
#define _cNode_HG_

#include "cPerson.h"
class cNode {
public:

	cPerson thePerson;
	cNode* pNextNode;
	cNode* pPrevNode;

	cNode() {
		this->pNextNode = NULL;
		this->pPrevNode = NULL;
	};


};


#endif