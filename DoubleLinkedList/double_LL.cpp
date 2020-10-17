

#include "double_LL.h"


//Constructor
cDouble_LL::cDouble_LL() {
	this->pCurrentNode = NULL;
	this->pFirstNode = NULL;
	this->pLastNode = NULL;
}


void cDouble_LL::InsertAtHead(DataExample data) {
	if (this->pCurrentNode == NULL) {
		this->pCurrentNode = new cNode;
		this->pCurrentNode->data = data;

		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
	}
	else {

		//create new node
		cNode* tempNode = new cNode;
		//add data
		tempNode->data = data;

		//connect both nodes
		this->pFirstNode->pPrevNode = tempNode;
		tempNode->pNextNode = this->pFirstNode;
		
		//assign
		this->pFirstNode = tempNode;
	}
}
void cDouble_LL::AddToTail(DataExample data) {
	if (this->pCurrentNode == NULL) {
		this->pCurrentNode = new cNode;
		this->pCurrentNode->data = data;

		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
	}
	else {


		cNode* tempNode = new cNode;

		tempNode->data = data;

		this->pLastNode->pNextNode = tempNode;
		tempNode->pPrevNode = this->pLastNode;

		//this->pCurrentNode = tempNode;
		this->pLastNode = tempNode;
	}
}


//Insert after current node and updates current  node
void cDouble_LL::Insert(DataExample data) {
	//Create new node
	cNode* tempNode = new cNode;
	tempNode->data = data;

	//insert the first element
	if (this->pCurrentNode == NULL) { 
		this->pCurrentNode = tempNode;
		this->pFirstNode = this->pCurrentNode;
		this->pLastNode = this->pCurrentNode;
	}

	//insert after current node
	// is current node the last node
	if (this->pCurrentNode == this->pLastNode) {

		//Connect both
		this->pCurrentNode->pNextNode = tempNode;
		tempNode->pPrevNode = this->pCurrentNode;

		//Change current
		this->pCurrentNode = tempNode;
		this->pLastNode = tempNode;
	}
	else {
		//Set prev and next to new node
		tempNode->pNextNode = this->pCurrentNode->pNextNode;
		tempNode->pPrevNode = this->pCurrentNode;

		//Update nodes in the list to fit new node
		this->pCurrentNode->pNextNode->pPrevNode = tempNode;
		this->pCurrentNode->pNextNode = tempNode;

	}
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
