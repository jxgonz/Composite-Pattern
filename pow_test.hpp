#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__
#include "gtest/gtest.h"
#include "pow.hpp"

using namespace std;

TEST(PowTest, PowEvaluateZeroes) {
    Base* left = new Op(0.0);
    Base* right = new Op(0.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 1);
    EXPECT_EQ(test -> stringify(), "(0.000000 ** 0.000000)");
}	

TEST(PowTest, PowEvaluateZeroPow) {
    Base* left = new Op(5.0);
    Base* right = new Op(0.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 1);
    EXPECT_EQ(test -> stringify(), "(5.000000 ** 0.000000)");
}

TEST(PowTest, PowEvaluateZeroBase) {
    Base* left = new Op(0.0);
    Base* right = new Op(5.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 0);
    EXPECT_EQ(test -> stringify(), "(0.000000 ** 5.000000)");
}

TEST(PowTest, PowEvaluateNegPow) {
    Base* left = new Op(5.0);
    Base* right = new Op(-2.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 0.04);
    EXPECT_EQ(test -> stringify(), "(5.000000 ** -2.000000)");
}

TEST(PowTest, PowEvaluateNegBase) {
    Base* left = new Op(-5.0);
    Base* right = new Op(2.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 25);
    EXPECT_EQ(test -> stringify(), "(-5.000000 ** 2.000000)");
}

TEST(PowTest, PowEvaluateLargePow) {
    Base* left = new Op(2.0);
    Base* right = new Op(10.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 1024);
    EXPECT_EQ(test -> stringify(), "(2.000000 ** 10.000000)");
}

TEST(PowTest, PowEvaluateLargeBase) {
    Base* left = new Op(100.0);
    Base* right = new Op(2.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 10000);
    EXPECT_EQ(test -> stringify(), "(100.000000 ** 2.000000)");
}

TEST(PowTest, PowEvaluateSmallPow) {
    Base* left = new Op(25.0);
    Base* right = new Op(0.5);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 5);
    EXPECT_EQ(test -> stringify(), "(25.000000 ** 0.500000)");
}

TEST(PowTest, PowEvaluateSmallBase) {
    Base* left = new Op(0.5);
    Base* right = new Op(2.0);
    Base* test = new Pow(left, right);
    EXPECT_DOUBLE_EQ(test -> evaluate(), 0.25);
    EXPECT_EQ(test -> stringify(), "(0.500000 ** 2.000000)");
}


#endif //__OP_TEST_HPP__

