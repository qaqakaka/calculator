#include <gtest/gtest.h>
#include "calculator.cpp" // Include the calculator logic

// Your test cases
TEST(CalculatorTest, AddTest)
{
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

// Main function to run all tests
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
