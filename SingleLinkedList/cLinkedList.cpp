

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
void cLinkedList::InsertAtHead(cCity theCity) {
	if (this->pCurrentNode == NULL) { 
		//no nodes, then insert first
		this->pCurrentNode = new cNode;
		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
		this->pCurrentNode->theCity = theCity;
	}
	cNode *temp = new cNode;
	temp->theCity = theCity;
	temp->pNextNode = this->pFirstNode;
	this->pFirstNode = temp;
}
//insert to tail/end
void cLinkedList::AddToTail(cCity theCity) {

	if (this->pCurrentNode == NULL) {
		//no nodes, then insert first
		this->pCurrentNode = new cNode;
		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
		this->pCurrentNode->theCity = theCity;
	}
	cNode* temp = new cNode;
	temp->theCity = theCity;
	this->pLastNode->pNextNode = temp;
	this->pLastNode = temp;
}
//insert at current location
void cLinkedList::Insert(cCity theCityToInsert) {

	//is this the first insert?
	if (this->pCurrentNode == NULL) { //== null == 0
		//no nodes, then insert first
		this->pCurrentNode = new cNode;
		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
		this->pCurrentNode->theCity = theCityToInsert;
	}
	else
	{
	
	// make new node
	// put the person at that node
	// connect the current node to this new node
	// connect the new node to the node the "old" current node was pointing to 
	// set the current node to this new node;


		cNode* tempNode = new cNode;
		tempNode->theCity = theCityToInsert;

		if (this->pCurrentNode->pNextNode == NULL) { //is at head
			this->pCurrentNode->pNextNode = tempNode;
			this->pLastNode = tempNode;
			
		}
		else {
			tempNode->pNextNode = this->pCurrentNode->pNextNode;
			this->pCurrentNode->pNextNode = tempNode;
			
		}
		this->pCurrentNode = tempNode;

	}
}			

bool cLinkedList::MoveNext(void) {
	if (this->pCurrentNode->pNextNode == NULL)
		return false;

	this->pCurrentNode = this->pCurrentNode->pNextNode;
	return true;
}
void cLinkedList::MoveToHead(void) {
	this->pCurrentNode = this->pFirstNode;
	return;
}
void cLinkedList::MoveToTail(void) {
	this->pCurrentNode = this->pLastNode;
}