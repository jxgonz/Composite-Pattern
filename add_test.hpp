#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(AddTest, AddTwoNonZeros) {
    Base* leftVal = new Op (3.0);
    Base* rightVal = new Op (5.0);
    Base* test = new Add(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 8.0);
}

TEST(AddTest, AddTwoNonZerosStringify) {
    Base* leftVal = new Op (3.0);
    Base* rightVal = new Op (5.0);
    Base* test = new Add(leftVal, rightVal);
    string stringy = "+";
    EXPECT_EQ(test->stringify(), stringy);
}

TEST(AddTest, AddPosAndNeg) {
    Base* leftVal = new Op (-5.0);
    Base* rightVal = new Op (14.0);
    Base* test = new Add(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 9.0);
}

TEST(AddTest, AddPosAndNegStringify) {
    Base* leftVal = new Op (-5.0);
    Base* rightVal = new Op (14.0);
    Base* test = new Add(leftVal, rightVal);
    string stringy = "+";
    EXPECT_EQ(test->stringify(), stringy);
}


#endif //__ADD_TEST_HPP__

