/*
 * PrimeFactorsKataTest.cpp
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#include <stdlib.h>
#include <pystring/pystring.h>

#include "PrimeFactorsKataTest.h"

PrimeFactorsKataTest::PrimeFactorsKataTest() {

}

PrimeFactorsKataTest::~PrimeFactorsKataTest() {
}

int PrimeFactorsKataTest::string2int(const std::string& number) {
	return atoi(number.c_str());
}

std::vector<int> PrimeFactorsKataTest::list(const std::string& str) {
	if (str.empty()) {
		return std::vector<int>();
	}
	std::vector<std::string> list;
	std::vector<int> result;
	pystring::split(str, list, ",");
	for (unsigned i = 0; i < list.size(); ++i) {
		result.push_back(string2int(list.at(i)));
	}
	return result;
}
