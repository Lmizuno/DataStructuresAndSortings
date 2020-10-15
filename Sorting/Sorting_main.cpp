// Sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>

#include "cPerson.h"

#include "cPersonMaker.h"
#include "Sorts.h"

int main(int argc, char* argv[] )
{
    //const std::string firstNameFile = "firstnames.txt";

    //cPersonMaker* pPM = new cPersonMaker();

    //std:: cout << argv[0] << std::endl;


    //std::string errorState = "";
    //if (!pPM->Init(firstNameFile, "", "", errorState)) {
    //    //False is error state
    //    std::cout << "PersonMaker::Init() return false because:" << std::endl;
    //    std::cout << errorState << std::endl;
    //    std::cout << std::endl;
    //    //EXIT program

    //    delete pPM;
    //    return -1;
    //}

    //==============TODO==================
    //GRABBING DATA FROM A SINGLE LINE AND SPLITTING IT INTO MULTIPLE VARIABLES
    //grab data from "yob1884.txt" 
    //chose random number from a range of 5 to 50
    //populate the cPerson array

    //
    //std::ifstream firstFile("yob1884.txt");

    //if (!firstFile) {
    //    return -1;
    //}
    //
    //std::vector<std::string> fNames;
    //std::vector<std::string> lNames;
    //std::vector<unsigned> ages;

    //std::string line, fName, lName;
    //unsigned age = 0;
    //
    //while (std::getline(firstFile, line)) {
    //    std::istringstream data;
    //    data.str(line);

    //    std::getline(data, fName, ',');
    //    std::getline(data, lName, ',');
    //    std::string tempAge;
    //    std::getline(data, tempAge, ',');
    //    age = std::stoi(tempAge);
    //    

    //    std::cout << "First Name: "<< fName << std::endl;
    //    std::cout << "Sex Name: " << lName << std::endl;
    //    std::cout << "Num: " << age << std::endl;
    //}



    //pPM->generatePerson();


    ////Test Sorts
    int myNums[10] = { 9, 6, 1, 8, 4, 2, 5, 7, 3, 0 };
    int myNumsA[5] = { 9, 6, 1, 8, 4 };
    int myNumsB[5] = { 2, 5, 7, 3, 0 };
    //int myNums2[10] = { 9, 6, 1, 8, 4, 2, 5, 7, 3, 0 };
    //int myNums3[10] = { 9, 6, 1, 8, 4, 2, 5, 7, 3, 0 };

    //unsigned sizeOfArray = 10;

    //std::cout << "{ ";
    //for (unsigned i = 0; i < sizeOfArray; i++) {
    //    std::cout << myNums[i] << " ";
    //}
    //std::cout << "} " << std::endl;

    /*bubbleSort(myNums, sizeOfArray);

    std::cout << "Bubble: \n"<<"{ ";
    for (unsigned i = 0; i < sizeOfArray; i++) {
        std::cout << myNums[i] << " ";
    }
    std::cout << "} " << std::endl;*/

    //selectionSort(myNums2, sizeOfArray);
    //std::cout << "Selection: \n" << "{ ";
    //for (unsigned i = 0; i < sizeOfArray; i++) {
    //    std::cout << myNums2[i] << " ";
    //}
    //std::cout << "} " << std::endl;
    
    //merge sort

    int listComb[10] = { 0 };
    mergeSort(myNumsA, 5, myNumsB, 5, listComb);


    for (int i = 0; i < 10; i++) {
        std::cout << listComb[i] << ", ";
    }
    
    return 0;
}

