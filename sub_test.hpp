#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubTwoNonZeros) {
    Base* leftVal = new Op (8.0);
    Base* rightVal = new Op (6.0);
    Base* test = new Sub(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 14.0);
}

TEST(SubTest, SubTwoNonZerosStringify) {
    Base* leftVal = new Op (8.0);
    Base* rightVal = new Op (6.0);
    Base* test = new Sub(leftVal, rightVal);
    string str = "-";
    EXPECT_EQ(test->stringify(), str);
}

TEST(SubTest, SubPosAndNeg) {
    Base* leftVal = new Op (-7.0);
    Base* rightVal = new Op (15.0);
    Base* test = new Sub(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), -22.0);
}

TEST(SubTest, SubPosAndNegStringify) {
    Base* leftVal = new Op (-7.0);
    Base* rightVal = new Op (15.0);
    Base* test = new Sub(leftVal, rightVal);
    string str = "-";
    EXPECT_EQ(test->stringify(), str);
}

TEST(SubTest, SubZeroAndNonZero) {
    Base* leftVal = new Op (13.0);
    Base* rightVal = new Op (0.0);
    Base* test = new Sub(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 13.0);
}

TEST(SubTest, SubZeroAndNonZeroStringify) {
    Base* leftVal = new Op (0.0);
    Base* rightVal = new Op (13.0);
    Base* test = new Sub(leftVal, rightVal);
    string str = "-";
    EXPECT_EQ(test->stringify(), str);
}

#endif // __SUB_TEST_HPP__
