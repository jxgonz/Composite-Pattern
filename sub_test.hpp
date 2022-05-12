#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubTwoNonZeros) {
    Base* leftVal = new Op (8.0);
    Base* rightVal = new Op (6.0);
    Base* test = new Sub(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 2.0);
}

TEST(SubTest, SubTwoNonZerosStringify) {
    Base* leftVal = new Op (8.0);
    Base* rightVal = new Op (6.0);
    Base* test = new Sub(leftVal, rightVal);
    EXPECT_EQ(test->stringify(), "(8.000000 - 6.000000)");
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
    EXPECT_EQ(test->stringify(), "(-7.000000 - 15.000000)");
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
    EXPECT_EQ(test->stringify(), ("(0.000000 - 13.000000)"));
}

#endif // __SUB_TEST_HPP__
