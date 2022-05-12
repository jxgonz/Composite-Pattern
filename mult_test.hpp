#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"

TEST(MultTest, MultTwoNonZeros) {
    Base* leftVal = new Op (7.0);
    Base* rightVal = new Op (9.0);
    Base* test = new Mult(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 63.0);
}

TEST(MultTest, MultTwoNonZerosStringify) {
    Base* leftVal = new Op (7.0);
    Base* rightVal = new Op (9.0);
    Base* test = new Mult(leftVal, rightVal);
    string str = "*";
    EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultPosAndNeg) {
    Base* leftVal = new Op (-7.0);
    Base* rightVal = new Op (15.0);
    Base* test = new Mult(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), -105.0);
}

TEST(MultTest, MultPosAndNegStringify) {
    Base* leftVal = new Op (-7.0);
    Base* rightVal = new Op (15.0);
    Base* test = new Mult(leftVal, rightVal);
    string str = "*";
    EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultZeroAndNonZero) {
    Base* leftVal = new Op (13.0);
    Base* rightVal = new Op (0.0);
    Base* test = new Mult(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, MultZeroAndNonZeroStringify) {
    Base* leftVal = new Op (0.0);
    Base* rightVal = new Op (13.0);
    Base* test = new Mult(leftVal, rightVal);
    string str = "*";
    EXPECT_EQ(test->stringify(), str);
}

TEST(MultTest, MultTwoNeg) { 
    Base* leftVal = new Op (-4.0);
    Base* rightVal = new Op (-5.0);
    Base* test = new Mult(leftVal, rightVal);
    EXPECT_DOUBLE_EQ(test->evaluate(), 20.0);
}

TEST(MultTest, MultTwoNegStringify) {
    Base* leftVal = new Op (-13.0);
    Base* rightVal = new Op (-3.0);
    Base* test = new Mult(leftVal, rightVal);
    string str = "*";
    EXPECT_EQ(test->stringify(), str);
}

#endif // __MULT_TEST_HPP__
