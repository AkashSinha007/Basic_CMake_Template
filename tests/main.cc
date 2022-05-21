#include <gtest/gtest.h>
#include "my_lib.h"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  ASSERT_EQ( 0,print_hello_world() );
}


