

#include "cLinkedList.h"
cLinkedList::cLinkedList() {
	this->pCurrentNode = NULL;
	this->pFirstNode = NULL;
	this->pLastNode = NULL;
}
cLinkedList::~cLinkedList() {
	//todo delete all the nodes

}

//inset to begin/head
void cLinkedList::InsertAtHead(cPerson thePerson) {

}
//insert to tail/end
void cLinkedList::AddToTail(cPerson thePerson) {
}
//insert at current location
void cLinkedList::Insert(cPerson thePersonToInsert) {

	//is this the first insert?
	if (this->pCurrentNode == NULL) { //== null == 0
		//no nodes, then insert first
		this->pCurrentNode = new cNode;
		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
		this->pCurrentNode->thePerson = thePersonToInsert;
	}
	else
	{
		//TODO: 
	// make new node
	// put the person at that node
	// connect the current node to this new node
	// connect the new node to the node the "old" current node was pointing to 
	// set the current node to this new node;


		cNode* tempNode = new cNode;

		tempNode->thePerson = thePersonToInsert;

		this->pCurrentNode->pNextNode = tempNode;

		this->pCurrentNode = tempNode;
		this->pLastNode = tempNode;
	}

	

}			

bool cLinkedList::MoveNext(void) {
	this->pCurrentNode = this->pCurrentNode->pNextNode;
	return false;
}
void cLinkedList::MoveToHead(void) {
	this->pCurrentNode = this->pFirstNode;
	return;
}
void cLinkedList::MoveToTail(void) {
	this->pCurrentNode = this->pLastNode;
}