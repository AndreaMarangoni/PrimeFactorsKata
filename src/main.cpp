//============================================================================
// Name        : PrimeFactorsKata.cpp
// Author      : Andrea Marangoni
// Version     :
// Copyright   :
// Description : PrimeFactor
//============================================================================

#include <gtest/gtest.h>
#include <list>

#include "../test/PrimeFactorsKataTest.h"
#include "PrimeFactorsKata.h"

using std::vector;

TEST(PrimeFactorsKata, GenerateOneGiveEmptyList) {
	ASSERT_EQ(PrimeFactorsKataTest::list(""), PrimeFactorsKata::generate(1));
}

TEST(PrimeFactorsKata, GenerateTwoGiveTwo) {
	ASSERT_EQ(PrimeFactorsKataTest::list("2"), PrimeFactorsKata::generate(2));
}


TEST(PrimeFactorsKata, GenerateThreeGiveThree) {
	ASSERT_EQ(PrimeFactorsKataTest::list("3"), PrimeFactorsKata::generate(3));
}

TEST(PrimeFactorsKata, GenerateFourGiveTwoTwo) {
	ASSERT_EQ(PrimeFactorsKataTest::list("2,2"), PrimeFactorsKata::generate(4));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
