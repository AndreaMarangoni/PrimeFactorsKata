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
		if (number % 2 == 0) {
			result.push_back(2);
		}
		if (number % 3 == 0) {
			result.push_back(3);
		}
	}
	return result;
}

PrimeFactorsKata::PrimeFactorsKata() {

}

PrimeFactorsKata::~PrimeFactorsKata() {
}

