#include "gtest/gtest.h"

#include "mult_test.hpp"
#include "mult.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
