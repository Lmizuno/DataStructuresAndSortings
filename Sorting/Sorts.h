#pragma once

#ifndef _Sorts_HG_
#define _Sorts_HG_

// GOOD FOR CONTAINERS WITH LINEAR ACCESS
//Bubble Sort
/*
	On each pass the biggest/smallest of the list will bubble to the end
	// 5 3 2 4 1 -> 3 2 4 1 5 -> 3 2 1 4 5 -> 2 1 3 4 5 -> 1 2 3 4 5
*/
void bubbleSort(int myNums[], const unsigned sizeOfArray);


//Insertion Sort
//One loop through , puts every number where they should be
void selectionSort(int myNums[], const unsigned sizeOfArray);




// GOOD FOR CONTAINERS WITH RANDOM ACCESS
//once merged the whole list we are done
//take long list
//divide into pieces as small as 1 or 2 items
// order items
//merge them in order

void mergeSort(int listA[], unsigned int sizeOfListA,
	int listB[], unsigned int sizeOfListB,
	int listCombined[]);

void quickSort();
#endif // !_Sorts_HG_

