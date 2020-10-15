#ifndef _cPerson_HG_
#define _cPerson_HG_

#include <string>




class cPerson
{
public:
	cPerson();
	~cPerson();

	std::string first;
	std::string middle; 
	std::string last; 

	int age;

	int streetNumber;
	std::string streetName;
	std::string streetType;
	std::string streetDirection;

	std::string city;
	std::string province;

	unsigned int SIN;
	//unsigned int SIN = 0; //C++11

	//enum inside the class "tightly coupled"
	enum eGenderType
	{
		MALE = 0,
		FEMALE,
		RATHER_NOT_SAY
	};
	eGenderType gender;
	std::string getGenderAsString(void);

private:
};


#endif