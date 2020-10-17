//#pragma once
#ifndef _cNode_HG_
#define _cNode_HG_

#include "cCity.h"

class cNode {
public:
	cNode();
	~cNode();

	cCity theCity;
	cNode* pNextNode;
};
#endif // !_cNode_HG_
