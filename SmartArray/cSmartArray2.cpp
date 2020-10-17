
#include "cSmartArray2.h"



cSmartArray2::cSmartArray2() {
	this->m_NextItemIndex = 0;
	this->m_Resize();
}
cSmartArray2::~cSmartArray2() {

}

void cSmartArray2::Push(myStruct mStruct)
{
	//TODO: What happens if there is an error? 
	if (this->m_NextItemIndex == this->m_currentArraySize) {
		this->m_Resize();
	}
	//put the person at the current "top" of the stack
	this->m_StructArray[this->m_NextItemIndex] = mStruct;

	//move the stack index tot he next location
	this->m_NextItemIndex++;
} //push back, push to the end/tail

myStruct cSmartArray2::Pop(void) {
	//TODO: What happens if there is an error? 

	//Move the stack back to where it was pointing
	this->m_NextItemIndex--;

	//debug purpose
	myStruct thePersonToR
		= this->m_StructArray[this->m_NextItemIndex];


	return thePersonToR;

} //get data from the end/tail

unsigned int cSmartArray2::getSize(void)
{
	//current amoutn
	return this->m_NextItemIndex ;

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

	myStruct* pNewArray = new myStruct[this->m_currentArraySize];

		
	//2.copy old data to new array
	for (unsigned int index = 0; index != this->m_NextItemIndex ; index++) {
		pNewArray[index] = this->m_StructArray[index];
	}
	//3.point to new array
	myStruct* pOldArray = this->m_StructArray;
	this->m_StructArray = pNewArray;
	
	//4.delete old array
	delete[] pOldArray;


}



