/*
Author: Luis Mizuno
Date: 2020-10-11
File: Double_LL_main.cpp
Purpose:

*/
#include <iostream>
#include "DataExample.h"
#include "double_LL.h"



int main() {
	cDouble_LL d_LL;

	DataExample Mary;
	Mary.a = "Mary";
	
	DataExample Joe;
	Joe.a = "Joe";

	DataExample Bob;
	Bob.a = "Bob";

	

	d_LL.InsertAtHead(Mary);	// M
	d_LL.InsertAtHead(Joe);		// J M
	d_LL.InsertAtHead(Bob);		// B J M

	d_LL.MoveToHead();
	for (int i = 1; i < 4; i++) {
		std::cout << "<Data[" << i << "]: " << d_LL.pCurrentNode->data.a << "> ";
		d_LL.MoveNext();
	}





}