#include "gtest/gtest.h"

#include "add_test.hpp"
//#include "mult.hpp"
//#include "div.hpp"
#include "add.hpp"
//#include "sub.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
