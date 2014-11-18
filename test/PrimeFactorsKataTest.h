/*
 * PrimeFactorsKataTest.h
 *
 *  Created on: 18 Nov 2014
 *      Author: andy
 */

#ifndef PRIMEFACTORSKATATEST_H_
#define PRIMEFACTORSKATATEST_H_

#include <vector>
#include <string>

class PrimeFactorsKataTest {
public:
	PrimeFactorsKataTest();
	virtual ~PrimeFactorsKataTest();
	static std::vector<int> list(const std::string& list);
private:
	static int string2int(const std::string& number);
};

#endif /* PRIMEFACTORSKATATEST_H_ */
