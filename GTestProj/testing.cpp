#include "stdafx.h"
#include <gtest\gtest.h>

#include <check.h>

TEST(testDoubleDecimal, test_check_isNumber) {
	EXPECT_EQ(false, isNumber("4..5"));
	EXPECT_EQ(false, isNumber("4.5"));
}

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc,argv);
	int ret = RUN_ALL_TESTS();
	return ret;
}