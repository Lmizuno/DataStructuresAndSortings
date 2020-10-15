/*
Author: Luis Mizuno
Date: 2020.10.01
*/

#include <iostream>

using namespace std;

//Simple Stack based on Arrays
//Data structure demonstration
class Stack {
public:
	

	static const int sizeOfStack = 100;
	int topOfStack = -1;
	int theData[sizeOfStack];

	
	void push(int newValue) {
		if (topOfStack > sizeOfStack - 1) {
			cout << "Stack overflow" << endl;
			return;
		}
		

		
		theData[++topOfStack] = newValue;
		
	}
	void pop(void) {
		if (topOfStack <= -1) {
			cout << "Stack underflow" << endl;
			return;
		}

		cout << "Poped element: " << theData[topOfStack] << endl;
		topOfStack--;
	}
	int getSize(void) {
		return topOfStack + 1;
	}
	bool is_empty(void) {
		return !(topOfStack > -1);
	}
	void clear(void) {
		topOfStack = -1;
	}
	int peek(void) {
		if (topOfStack >= 0) {
			return theData[topOfStack];
		}
		else {
			cout << "Stack is empty" << endl;
		}
	}
};


int main() {
	

	Stack myS;

	myS.push(1);
	myS.push(4);
	myS.push(5);
	myS.push(6);

	cout << "Is Empty? " << myS.is_empty() << endl;
	cout << "Get size of stack: " << myS.getSize() << endl;
	cout << "Peek top of stack: " << myS.peek() << endl;
	cout << "Pop 1: ";
	myS.pop();
	cout << "Peek top of stack: " << myS.peek() << endl;
	cout << "Get size of stack: " << myS.getSize() << endl;
	
	cout << "clear..." << endl;
	myS.clear();
	cout << "Is Empty? " << myS.is_empty() << endl;
	return 0;

}