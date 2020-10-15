/*
Author: Luis Mizuno
Date: 2020.10.01
*/
//push and pop control data
/*
push
pop
get size
is Empty
clear
*/
#include <iostream>
using namespace std;

class Stack {
public:
	static const int sizeOfStack = 10;
	int topOfStack = 0;
	int theData[sizeOfStack];

	
	void push(int newValue) {

		theData[topOfStack] = newValue;
		topOfStack++;
	}
	void pop(void) {
		if (topOfStack >= 0)
			topOfStack--;
		else
			std::cout << "Stack has no more data in it\n";
	}

	int peek(void) {
		return theData[topOfStack - 1];
	}
};


int main() {
	//Stack myStack;
	char c[] = { 's', 'a' };
	char* p = c;
	char* q = &c[0];
	std::cout << c[1] << p[1] << q[1];

	return 0;

}