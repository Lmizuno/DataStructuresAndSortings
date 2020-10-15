
#include "cSmartArray2.h"



cSmartArray2::cSmartArray2() {
	this->m_NextItemIndex = 0;
	this->m_Resize();
}
cSmartArray2::~cSmartArray2() {

}

void cSmartArray2::Push(cPerson thePerson)
{
	//TODO: What happens if there is an error? 
	if (this->m_NextItemIndex == this->m_currentArraySize) {
		this->m_Resize();
	}
	//put the person at the current "top" of the stack
	this->m_PeopleArray[this->m_NextItemIndex] = thePerson;

	//move the stack index tot he next location
	this->m_NextItemIndex++;
} //push back, push to the end/tail

cPerson cSmartArray2::Pop(void) {
	//TODO: What happens if there is an error? 

	//Move the stack back to where it was pointing
	this->m_NextItemIndex--;

	//debug purpose
	cPerson thePersonToR
		= this->m_PeopleArray[this->m_NextItemIndex];


	return thePersonToR;

} //get data from the end/tail

unsigned int cSmartArray2::getSize(void)
{
	//current amoutn
	return this->m_NextItemIndex - 1;

}
unsigned int cSmartArray2::getCapacity(void)
{
	//total possible data we can store, not current amount
	return this->m_currentArraySize;

}

void cSmartArray2::m_Resize(void) {
	//1.make the new array (that's bigger)
	this->m_currentArraySize *= 2;
	//this->m_currentArraySize *= 2; //growth is convention by 2 times

	cPerson* pNewArray = new cPerson[this->m_currentArraySize];

		
	//2.copy old data to new array
	for (unsigned int index = 0; index != this->m_NextItemIndex ; index++) {
		pNewArray[index] = this->m_PeopleArray[index];
	}
	//3.point to new array
	cPerson* pOldArray = this->m_PeopleArray;
	this->m_PeopleArray = pNewArray;
	
	//4.delete old array
	delete[] pOldArray;


}


void DoesNothing(void) {
	
	

	int x[12] = { 0 };		// static at stack
	int* px = new int[12];	// dynamic allocated at heap at runtime

	cPerson* myPeopleArray = 0; //when it's a pointer and you dont want to initialize yet you must set it to null
	
	myPeopleArray = new cPerson[10];	//creates a new block of memory 
	myPeopleArray = new cPerson[20];	//creates a new block of memory and forgets about the old 
	//dangerous, we lost control of the memory the pointer pointed to before this
	

	//what should be done is REALLOC
}


