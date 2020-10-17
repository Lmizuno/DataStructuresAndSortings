#ifndef _cLinkedList_HG_
#define _cLinkedList_HG_

#include "cNode.h"

class cLinkedList {
public:
	cLinkedList();
	~cLinkedList();

	cNode* pFirstNode;
	cNode* pLastNode;
	cNode* pCurrentNode;

	void InsertAtHead(cCity theCity);	//inset to begin/head
	void AddToTail(cCity theCity);		//insert to tail/end
	void Insert(cCity theCity);			//insert at current location

	bool MoveNext(void);
	void MoveToHead(void);
	void MoveToTail();

};

#endif // !_cLinkedList_HG_

