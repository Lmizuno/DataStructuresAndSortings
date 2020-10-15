#include <iostream>
#include "cLinkedList.h"
#include "cPerson.h"
int main() {

	cPerson Bob;
	Bob.first = "Bob";
	Bob.last = "Smith";
	Bob.age = 20;
	Bob.gender = cPerson::MALE;

	cPerson Susan;
	Susan.first = "Susan";
	Susan.last = "Jons";
	Susan.age = 30;
	Susan.gender = cPerson::FEMALE;

	cLinkedList theLL;

	theLL.Insert(Bob);
	theLL.Insert(Susan);

	return EXIT_SUCCESS;

}