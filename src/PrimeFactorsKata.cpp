/*
 * PrimeFactorsKata.cpp
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#include "PrimeFactorsKata.h"

std::vector<int> PrimeFactorsKata::generate(int number) {
	std::vector<int> result;
	if (number > 1) {
		result.push_back(number);
	}
	return result;
}

PrimeFactorsKata::PrimeFactorsKata() {

}

PrimeFactorsKata::~PrimeFactorsKata() {
}

