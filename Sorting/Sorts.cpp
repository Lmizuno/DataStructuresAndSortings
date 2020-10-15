#include "Sorts.h"
#include <iostream>

void bubbleSort(int myNums[], const unsigned sizeOfArray) {
    
    bool bDidSwap = false;
    do {
        bDidSwap = false;
        for (unsigned i = 0; i < (sizeOfArray - 1); i++) {
            //Compare index location with the next one 
            //if they are out of order then swap    
            if (myNums[i] > myNums[i + 1]) {
                int temp = myNums[i];
                myNums[i] = myNums[i + 1];
                myNums[i + 1] = temp;
                bDidSwap = true;
            }
        }
    } while (bDidSwap); // go on until no swap was made
}

void selectionSort(int myNums[], const unsigned sizeOfArray) {
    unsigned int currentIndex = 0;
    for (unsigned iCompare = 0; iCompare < (sizeOfArray - 1); iCompare++) {

        //Scan through the right side of the array,
        //looking for the smallest value below this one

        int smallestValueSoFar = myNums[iCompare];
        unsigned indexOfSmallestSoFar = iCompare;

        for (unsigned i = iCompare+1; i < sizeOfArray; i++) {
            if (myNums[i] < smallestValueSoFar) {
                smallestValueSoFar = myNums[i];
                indexOfSmallestSoFar = i;

            }


        }//index

        if (indexOfSmallestSoFar != iCompare) {
            //found smaller, swap them 
            int temp = myNums[iCompare];
            myNums[iCompare] = myNums[indexOfSmallestSoFar];
            myNums[indexOfSmallestSoFar] = temp;
            

        }
    }//index Compare
}

//utility to mergesort
void merge(int listA[], unsigned int sizeOfListA,
            int listB[], unsigned int sizeOfListB,
            int listCombined[]) {
    
    //Order list that has 2
    if (sizeOfListA == 2) {
        if (listA[0] > listA[1]) {
            int temp = listA[0];
            listA[0] = listA[1];
            listA[1] = temp;
        }
    }
    if (sizeOfListB == 2) {
        if (listB[0] > listB[1]) {
            int temp = listB[0];
            listB[0] = listB[1];
            listB[1] = temp;
        }
    }

    // index for list a, index for list b, index for list combined
    int i = 0, j = 0, k = 0;
    while ( i < sizeOfListA && j < sizeOfListB) {
        if (listA[i] <= listB[j]) {
             
            listCombined[k] = listA[i];
            //std::cout << listCombined[k] << std::endl;
            i++;
        }
        else {
            listCombined[k] = listB[j];
            //std::cout << listCombined[k] << std::endl;
            j++;
        }
        k++;
    }

    //copy any element left from the list A
    while (i < sizeOfListA) {
        listCombined[k] = listA[i];
        
        k++; i++;
    }
    //copy any element left from the list A
    while (j < sizeOfListB) {
        listCombined[k] = listB[j];
        
        k++; j++;
    }
}
void mergeSort( int listA[], unsigned int sizeOfListA,
                int listB[], unsigned int sizeOfListB,
                int listCombined[]){


    int* listCombinedA = NULL;
    int* listCombinedB = NULL;

    if (sizeOfListA > 2) {
        int sizeOfLeftHalfOfListA = (sizeOfListA + 1) / 2;
        int sizeOfRightHalfOfListA = sizeOfListA - sizeOfLeftHalfOfListA;

        int* leftHalfOfListA = listA;
        int* rightHalfOfListA = (listA + sizeOfLeftHalfOfListA); //????????

        listCombinedA = new int[sizeOfListA + sizeOfListB];

        
        mergeSort(  leftHalfOfListA, sizeOfLeftHalfOfListA,
                    rightHalfOfListA, sizeOfRightHalfOfListA, 
                    listCombinedA);

        merge(  leftHalfOfListA, sizeOfLeftHalfOfListA,
                rightHalfOfListA, sizeOfRightHalfOfListA, 
                listCombinedA);
    }
    if (sizeOfListB > 2) {

        int sizeOfLeftHalfOfListB = (sizeOfListB + 1) / 2;
        int sizeOfRightHalfOfListB = sizeOfListB - sizeOfLeftHalfOfListB;

        int* leftHalfOfListB = listB;
        int* rightHalfOfListB = (listB + sizeOfLeftHalfOfListB); //????????

        //0 1 2 3 4 5
        //3

        listCombinedB = new int[sizeOfListA + sizeOfListB];

        mergeSort(  leftHalfOfListB, sizeOfLeftHalfOfListB,
                    rightHalfOfListB, sizeOfRightHalfOfListB, 
                    listCombinedB);
        //merge
        merge(  leftHalfOfListB, sizeOfLeftHalfOfListB,
                rightHalfOfListB, sizeOfRightHalfOfListB, 
                listCombinedB);
    }

    merge(listA, sizeOfListA,
        listB, sizeOfListB,
            listCombined);

    delete[] listCombinedA;
    delete[] listCombinedB;
}


void quickSort() {

}