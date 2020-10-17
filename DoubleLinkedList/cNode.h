#pragma once
#ifndef _cNode_HG_
#define _cNode_HG_

#include "DataExample.h"
class cNode {
public:

	DataExample data;
	cNode* pNextNode;
	cNode* pPrevNode;

	cNode() {
		this->pNextNode = NULL;
		this->pPrevNode = NULL;
	};


};


#endif