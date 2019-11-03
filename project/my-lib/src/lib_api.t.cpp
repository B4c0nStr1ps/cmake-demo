//
// Created by b4c0nstr1ps on 11/3/19.
//
#include "gtest/gtest.h"
#include "my-lib/lib_api.hpp"

TEST(MyLibTests, api) {
    EXPECT_EQ(dsl::do_print(), "hello from my-lib!!");
}
