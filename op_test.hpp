#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(0.0);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(MockOpTest1, negativeSmall) {
    OneOpMock* test = new OneOpMock();
    EXPECT_EQ(test->evaluate(), -0.4);
}

TEST(MockOpTest2, negativeLarge) {
    TwoOpMock* test = new TwoOpMock();
    EXPECT_EQ(test->evaluate(), -134.7);
}

TEST(MockOpTest3, positiveSmall) {
    ThreeOpMock* test = new ThreeOpMock();
    EXPECT_EQ(test->evaluate(), 0.4);
}

TEST(MockOpTest4, positiveLarge) {
    FourOpMock* test = new FourOpMock();
    EXPECT_EQ(test->evaluate(), 134.7);
}

TEST(MockOpTest5, zeroOp) {
    FiveOpMock* test = new FiveOpMock();
    EXPECT_EQ(test->evaluate(), 0);
}


#endif //__OP_TEST_HPP__
