//#pragma once
//#pragma once
#ifndef _cSmartArray2_HG_
#define _cSmartArray2_HG_




//Smart array just for cPeople objs
#include "cPerson.h"


class cSmartArray2
{

public:

	cSmartArray2();
	~cSmartArray2();

	void Push(cPerson thePerson); //push back, push to the end/tail

	cPerson Pop(void); //get data from the end/tail

	unsigned int getSize(void);

	unsigned int getCapacity(void); //Capacity changes

	//TO THINK:
	//Non exception error conditions
	//bool Push_b(cPerson thePerson);
	//bool Pop_b(cPerson& thePerson);


private:

	//Resize array to m_currentArraySize, at run time
	void m_Resize(void);

	//Location of the next item to be added
	unsigned int m_NextItemIndex; // = 0

	static const unsigned int INITIALARRAYSIZE = 5;
	unsigned int m_currentArraySize = INITIALARRAYSIZE;

	//Actual data
	cPerson* m_PeopleArray;

};

#endif // !_cSmartArray_HG_
