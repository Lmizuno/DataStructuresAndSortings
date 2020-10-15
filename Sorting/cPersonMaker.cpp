
#include "cPersonMaker.h"
#include <fstream>
#include <iostream>

cPersonMaker::cPersonMaker() {

}

bool cPersonMaker::Init(std::string firstNameFileName,
						std::string lastNameFileName,
						std::string streetNameFileName,
						std::string& errors) 
{
	//Load the 1st name file int a vector 
	std::ifstream firstFile(firstNameFileName);

	if (!firstFile) {
		errors = "Didn't open first name file";
		return false;
	}

	//First name file is open OK

	std::string nextName;
	while (firstFile >> nextName) {
		//std::cout << nextName << std::endl;
		this->vecFirstNames.push_back(nextName);
	}
	
	//Load the Last name file into a vector
	std::ifstream secondFile(firstNameFileName);

	if (!secondFile) {
		errors = "Didn't open last name file";
		return false;
	}

	//First name file is open OK
	while (secondFile >> nextName) {
		//std::cout << nextName << std::endl;
		this->vecLastNames.push_back(nextName);
	}



	return true;

}