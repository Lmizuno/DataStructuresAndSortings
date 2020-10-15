// Recursiveness.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//pass index and get fib number

//Everytime calcFib is calculated it adds a new call to the stack, new int 'n'
//by the nth number there will be more than nth calls to the functions therefore
//more than nth 'n' variables clones created
long long calcFib(int n ) { 


    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    

    //else
    long long fn = calcFib(n - 1) + calcFib(n - 2);

    return fn;
    
}


int findIndexOfThing(int x[], int sizeOfArray, int valueToFind) {
    
    //linear - unordered
    for (int i = 0; i < sizeOfArray; i++) {
        if (x[i] == valueToFind)
            return i;
    }
    //didn't find
    return -1;

}
int findIndexOfThing_recursive(int x[], int sizeOfArray, int valueToFind, int index) {

    
    if (index >= sizeOfArray) {
        return -1;
    }
    if (x[index] == valueToFind) {
        return index;
    }
    else {
        return findIndexOfThing_recursive(x, sizeOfArray, valueToFind, ++index);
    }


    //didn't find
    return -1;

}


int main()
{
    for (int n = 0; n < 10; n++) {
        std::cout << calcFib(n) << std::endl;
    }

    
    int myNums[10] = { 9, 6, 1, 8, 4, 2, 5, 7, 3, 0 };
    int index = findIndexOfThing(myNums, 10, 3);
    if (index > 0)
        std::cout << "Index found: " << index << ", Value: " << myNums[index] << std::endl;
    else
        std::cout << "Index not found." << std::endl;

    

    return 0;
}

