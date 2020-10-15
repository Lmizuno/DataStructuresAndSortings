#include "cPerson.h"


cPerson::cPerson() {
	this->gender = cPerson::RATHER_NOT_SAY;
	this->streetNumber = 0;
	this->SIN = 0;
	this->age = -1;
}

cPerson::~cPerson() 
{

}

std::string cPerson::getGenderAsString(void) 
{
	
	switch (this->gender)
	{
	case cPerson::MALE:
		return "Male";
		break;
	case cPerson::FEMALE:
		return "Female";
		break;
	case cPerson::RATHER_NOT_SAY:
		return "Rather not say";
		break;
	}
	return "Code error, call dev team";

}