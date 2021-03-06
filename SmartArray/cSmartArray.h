//#pragma once
#ifndef _cSmartArray_HG_
#define _cSmartArray_HG_




//Smart array just for cPeople objs

#include "myStruct.h"

class cSmartArray 
{

public:

	cSmartArray();
	~cSmartArray();
	
	void Push(myStruct mStruct); //push back, push to the end/tail
	
	myStruct Pop(void); //get data from the end/tail
	
	unsigned int getSize(void);
	

	//TO THINK:
	//Non exception error conditions
	//bool Push_b(cPerson thePerson);
	//bool Pop_b(cPerson& thePerson);


private:
	//Location of the next item to be added
	unsigned int m_NextItemIndex = -1; // = 0

	static const unsigned int ARRAYSIZE = 100;

	//Actual data
	myStruct m_Struct_Array[ARRAYSIZE];

};

#endif // !_cSmartArray_HG_
