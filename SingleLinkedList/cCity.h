#pragma once
#ifndef _cCity_HG_
#define _cCity_HG_
#include <string>

class cCity {
public:
	std::string name;
	std::string prov;
	std::string country;

	cCity() {};
	cCity(std::string n) : name(n) { country = "Canada"; };
};

#endif // !_cCity_HG_


