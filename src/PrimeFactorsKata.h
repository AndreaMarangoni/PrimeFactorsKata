/*
 * PrimeFactorsKata.h
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#ifndef PRIMEFACTORSKATA_H_
#define PRIMEFACTORSKATA_H_

#include <vector>

class PrimeFactorsKata {
public:
	PrimeFactorsKata();
	virtual ~PrimeFactorsKata();
	static std::vector<int> generate(int number);
};

#endif /* PRIMEFACTORSKATA_H_ */
