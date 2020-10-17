#pragma once
#ifndef _double_LL_HG_
#define _double_LL_HG_
#include "cPerson.h"
#include "cNode.h"

class cDouble_LL {
public:
	cDouble_LL();

	cNode* pFirstNode;
	cNode* pLastNode;
	cNode* pCurrentNode;

	void InsertAtHead(DataExample thePersonToInsert);
	void AddToTail(DataExample thePersonToInsert);
	
	void Insert(DataExample thePersonToInsert);

	bool MovePrevious(void);
	bool MoveNext(void);
	void MoveToHead(void);
	void MoveToTail();

private:


};
#endif // !_double_LL_HG_

