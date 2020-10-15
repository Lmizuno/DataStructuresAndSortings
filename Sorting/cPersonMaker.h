#pragma once

#ifndef _cPeronMaker_HG_
#define _cPeronMaker_HG_

#include <vector>
#include <string>
#include "cPerson.h"
class cPersonMaker{
public:
	cPersonMaker();

	bool Init(	std::string firstNameFileName, 
				std::string lastNameFileName,	
				std::string streetNameFileName,
				std::string &errors);
	cPerson generatePerson();
private:
	std::vector<std::string> vecFirstNames;
	std::vector<std::string> vecLastNames;
	//std::vector<std::string> vecFirstNames;
};


#endif // !_cPeronMaker_HG_

