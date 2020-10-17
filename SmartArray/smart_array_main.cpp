/*
Author: Luis Mizuno
Date: 2020.10.01
File: smart_array_main.cpp

Hold smart array methods and main
*/

/*
* Smart Array = Vector
Push	- pushback
Pop		- pop front
GetAtIndex()
GetSize()
IsEmpty()
Resize/Reserve()
Clear()
*/

#include <iostream>
#include <vector> //aka. "smart array"
#include "cPerson.h"
#include "cSmartArray.h"
#include "cSmartArray2.h"
#include "myStruct.h"
using namespace std;



int main() {

	//=====Stack based variables=====
	std::vector<myStruct> vecStruct;

	myStruct s1;
	s1.a = 10;
	s1.b = 13;
	s1.c = "Bob";
	vecStruct.push_back(s1);

	s1.c = "London";//will change s1 but not vecStruct()
	//vecStruct[s1] is a copy of s1

	
	cout <<"Changed: " << s1.c << endl;
	cout <<"Not changed: "<< vecStruct[0].c << endl;
	
	
	//======using heap based variables ===== 
	std::vector<myStruct*> vec_pStruct;

	myStruct* pS2 = new myStruct;
	pS2->a = 123;
	pS2->b = 15;
	pS2->c = "Joe";
	
	// copies the pointer and then bob is now a reference instead of a copy
	vec_pStruct.push_back(pS2); 

	pS2->c = "Mike"; //changed

	cout << pS2->c << endl;
	cout << vec_pStruct[0]->c << endl;

	//=========personal smart array=========
	//it can resize!!
	myStruct Bob;
	Bob.c = "Bob";
	myStruct Joe;
	Joe.c = "Joe";



	cSmartArray2 saPeople;
	cout << "==Smart array 2==" << endl;
	saPeople.Push(Bob);
	saPeople.Push(Joe);
	saPeople.Push(Bob);
	saPeople.Push(Joe);
	saPeople.Push(Bob);
	saPeople.Push(Joe);
	saPeople.Push(Bob);
	saPeople.Push(Joe);

	int sizeOfPeople = saPeople.getSize();

	cout << "Size of People: " << sizeOfPeople << endl;
	for (int i = 0; i < sizeOfPeople; i++) {
		cout << saPeople.Pop().c << endl;
	}
}