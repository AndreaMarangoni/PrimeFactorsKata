/*
 * PrimeFactorsKata.cpp
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#include "PrimeFactorsKata.h"

std::vector<int> PrimeFactorsKata::generate(int number) {
	if (number > 1) {
		std::vector<int> result;
		result.push_back(2);
		return result;
	}
	return std::vector<int>();
}

PrimeFactorsKata::PrimeFactorsKata() {

}

PrimeFactorsKata::~PrimeFactorsKata() {
}

