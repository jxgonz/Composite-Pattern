#include "gtest/gtest.h"

#include "sub_test.hpp"
#include "sub.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
