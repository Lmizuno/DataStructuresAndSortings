#include <iostream>
#include "cPerson.h"
#include "double_LL.h"
int main() {
	cDouble_LL d_LL;

	cPerson p1 = cPerson();
	p1.first = "Mary";
	
	cPerson p2 = cPerson();
	p2.first = "Joe";
	
	cPerson p3 = cPerson();
	p3.first = "Brit";
	

	d_LL.InsertAtHead(p1);	// p1
	d_LL.InsertAtHead(p2);	// p2 p1
	d_LL.InsertAtHead(p3);	// p3 p2 p1

	d_LL.MoveToHead();
	for (int i = 1; i < 4; i++) {
		std::cout << "<Person" << i << ": " << d_LL.pCurrentNode->thePerson.first << "> ";
		d_LL.MoveNext();
	}





}