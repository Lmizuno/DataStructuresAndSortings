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

	void InsertAtHead(cPerson thePerson);	//inset to begin/head
	void AddToTail(cPerson thePerson);		//insert to tail/end
	void Insert(cPerson thePerson);			//insert at current location

	bool MoveNext(void);
	void MoveToHead(void);
	void MoveToTail();



	
};

#endif // !_cLinkedList_HG_

