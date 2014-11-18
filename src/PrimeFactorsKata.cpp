/*
 * PrimeFactorsKata.cpp
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#include "PrimeFactorsKata.h"

std::vector<int> PrimeFactorsKata::generate(int number) {
	std::vector<int> result;
	int candidate = 2;
	for (; number > 1; ++candidate) {
		for (; number % candidate == 0; number /= candidate) {
			result.push_back(candidate);
		}
	}
	return result;
}

PrimeFactorsKata::PrimeFactorsKata() {

}

PrimeFactorsKata::~PrimeFactorsKata() {
}

