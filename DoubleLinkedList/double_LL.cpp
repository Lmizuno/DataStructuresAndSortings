

#include "double_LL.h"


//Constructor
cDouble_LL::cDouble_LL() {
	this->pCurrentNode = NULL;
	this->pFirstNode = NULL;
	this->pLastNode = NULL;
}


void cDouble_LL::InsertAtHead(cPerson thePersonToInsert) {
	if (this->pCurrentNode == NULL) {
		this->pCurrentNode = new cNode;
		this->pCurrentNode->thePerson = thePersonToInsert;

		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
	}
	else {

		//create new node
		cNode* tempNode = new cNode;
		//add data
		tempNode->thePerson = thePersonToInsert;

		//connect both nodes
		this->pFirstNode->pPrevNode = tempNode;
		tempNode->pNextNode = this->pFirstNode;
		
		//assign
		this->pFirstNode = tempNode;
	}
}
void cDouble_LL::AddToTail(cPerson thePersonToInsert) {
	if (this->pCurrentNode == NULL) {
		this->pCurrentNode = new cNode;
		this->pCurrentNode->thePerson = thePersonToInsert;

		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
	}
	else {


		cNode* tempNode = new cNode;

		tempNode->thePerson = thePersonToInsert;

		this->pLastNode->pNextNode = tempNode;
		tempNode->pPrevNode = this->pLastNode;

		//this->pCurrentNode = tempNode;
		this->pLastNode = tempNode;
	}
}

void cDouble_LL::Insert(cPerson thePersonToInsert) {

}

bool cDouble_LL::MovePrevious(void) {
	if (this->pCurrentNode->pPrevNode) {
		this->pCurrentNode = this->pCurrentNode->pPrevNode;
		return true;
	}
	return false;
		
}
bool cDouble_LL::MoveNext(void) {
	if (this->pCurrentNode->pNextNode) {
		this->pCurrentNode = this->pCurrentNode->pNextNode;
		return true;
	}
	return false;
	
}
void cDouble_LL::MoveToHead(void) {
	this->pCurrentNode = this->pFirstNode;
}
void cDouble_LL::MoveToTail() {
	this->pCurrentNode = this->pLastNode;
}
