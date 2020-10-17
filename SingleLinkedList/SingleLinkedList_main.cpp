#include <iostream>
#include "cLinkedList.h"
#include "cCity.h"
int main() {
	//Stack
	cCity London;
	London.name = "London";
	
	cCity Toronto;
	Toronto.name = "Toronto";
	
	cCity Vancv;
	Vancv.name = "Vancv";

	cCity Woodst;
	Woodst.name = "Woodst";
	cLinkedList theLL;


	//8 insertions
	theLL.Insert(London);
	theLL.Insert(Toronto);
	theLL.Insert(Vancv);
	theLL.Insert(Woodst);

	std::cout<< "Current node: " << theLL.pCurrentNode->theCity.name << std::endl;

	theLL.MoveToHead();
	std::cout << "To Head node: " << theLL.pCurrentNode->theCity.name << std::endl;
	theLL.MoveToTail();
	std::cout << "To Tail node: " << theLL.pCurrentNode->theCity.name << std::endl;
	theLL.MoveToHead();
	std::cout << "To Head node: " << theLL.pCurrentNode->theCity.name << std::endl;
	theLL.MoveNext();
	std::cout << "To next node: " << theLL.pCurrentNode->theCity.name << std::endl;
	std::cout << "Insert bob after current" << std::endl;
	theLL.Insert(Toronto);
	std::cout << "Current node: " << theLL.pCurrentNode->theCity.name << std::endl;

	std::cout << "Insert at head: " << std::endl;
	theLL.InsertAtHead(Woodst);
	std::cout << "Head node: " << theLL.pFirstNode->theCity.name << std::endl;
	std::cout << "Add to tail: " << std::endl;
	theLL.AddToTail(Vancv);
	std::cout << "Tail node: " << theLL.pLastNode->theCity.name << std::endl;

	

	return EXIT_SUCCESS;

}