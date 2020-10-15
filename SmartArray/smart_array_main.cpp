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
using namespace std;


int main() {
	std::vector<cPerson> vecPeople;
	cPerson Bob; //" Stack based variable" 
	Bob.first = "Bob";
	Bob.last = "Smith";
	Bob.age = 20;
	Bob.gender = cPerson::MALE;

	vecPeople.push_back(Bob);

	Bob.city = "London";//will change Bob but not vecPeople(bob)
	//vecPeople Bob is a copy of Bob


	//======using heap based variable

	std::vector<cPerson*> vec_pPeople;

	cPerson* pBob = new cPerson();
	pBob->first = "Bob";
	pBob->last = "Smith";
	pBob->age = 20;
	pBob->gender = cPerson::MALE;

	vec_pPeople.push_back(pBob); // copies the pointer and then bob is now a reference instead of a copy

	pBob->city = " London";

	//=========personal smart array
	cSmartArray saPeople;
	saPeople.Push(Bob);
}