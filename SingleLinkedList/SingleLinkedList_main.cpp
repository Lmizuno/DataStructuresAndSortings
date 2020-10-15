#include <iostream>
#include "cLinkedList.h"
#include "cPerson.h"
int main() {

	cPerson Bob;
	Bob.first = "Bob";
	
	cPerson Susan;
	Susan.first = "Susan";
	
	cPerson Joe;
	Joe.first = "Joe";

	cPerson Bill;
	Bill.first = "Bill";
	cLinkedList theLL;


	//8 insertions
	theLL.Insert(Bob);
	theLL.Insert(Susan);
	theLL.Insert(Joe);
	theLL.Insert(Bill);

	std::cout<< "Current node: " << theLL.pCurrentNode->thePerson.first << std::endl;

	theLL.MoveToHead();
	std::cout << "To Head node: " << theLL.pCurrentNode->thePerson.first << std::endl;
	theLL.MoveToTail();
	std::cout << "To Tail node: " << theLL.pCurrentNode->thePerson.first << std::endl;
	theLL.MoveToHead();
	std::cout << "To Head node: " << theLL.pCurrentNode->thePerson.first << std::endl;
	theLL.MoveNext();
	std::cout << "To next node: " << theLL.pCurrentNode->thePerson.first << std::endl;
	std::cout << "Insert bob after current" << std::endl;
	theLL.Insert(Bob);
	std::cout << "Current node: " << theLL.pCurrentNode->thePerson.first << std::endl;

	std::cout << "Insert at head: " << std::endl;
	theLL.InsertAtHead(Bill);
	std::cout << "Head node: " << theLL.pFirstNode->thePerson.first << std::endl;
	std::cout << "Add to tail: " << std::endl;
	theLL.AddToTail(Susan);
	std::cout << "Tail node: " << theLL.pLastNode->thePerson.first << std::endl;

	

	return EXIT_SUCCESS;

}