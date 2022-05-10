#include "gtest/gtest.h"

#include "mockop_1.hpp"
#include "mockop_2.hpp"
#include "mockop_3.hpp"
#include "mockop_4.hpp"
#include "mockop_5.hpp"
#include "op_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
