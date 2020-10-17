
#include "cSmartArray.h"

cSmartArray::cSmartArray() {
	this->m_NextItemIndex = 0;
}
cSmartArray::~cSmartArray() {

}

void cSmartArray::Push(myStruct mStruct)
{
	//put the person at the current "top" of the stack
	this->m_Struct_Array[this->m_NextItemIndex] = mStruct;

	//move the stack index tot he next location
	this->m_NextItemIndex++;
} //push back, push to the end/tail

myStruct cSmartArray::Pop(void) {
	
	//Move the stack back to where it was pointing
	this->m_NextItemIndex--;

	//debug purpose
	myStruct thePersonToR
		= this->m_Struct_Array[this->m_NextItemIndex];


	return thePersonToR;

} //get data from the end/tail

unsigned int cSmartArray::getSize(void)
{
	return this->m_NextItemIndex - 1;

}


	
