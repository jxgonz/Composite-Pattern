#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__
#include "gtest/gtest.h"
#include "rand.hpp"

using namespace std;

TEST(RandTest, RandEvaluateRandNum) {
    Rand* test = new Rand();
    cout << test -> evaluate() << " == " << test -> stringify() << " == " << to_string(test -> evaluate()) << endl;
    EXPECT_EQ(test->stringify(), to_string(test->evaluate()));
}	

#endif //__OP_TEST_HPP__

