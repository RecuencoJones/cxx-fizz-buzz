#include "gtest/gtest.h"
#include "fizzbuzz.h"

TEST(fizzbuzz, testNumberNotDivisibleBy3Or5) {
    EXPECT_EQ(fizzbuzz(1), "1");
}

TEST(fizzbuzz, testNumberDivisibleBy3) {
    EXPECT_EQ(fizzbuzz(3), "Fizz");
}

TEST(fizzbuzz, testNumberDivisibleBy5) {
    EXPECT_EQ(fizzbuzz(5), "Buzz");
}

TEST(fizzbuzz, testNumberDivisibleBy3And5) {
    EXPECT_EQ(fizzbuzz(15), "FizzBuzz");
}

TEST(fizzbuzz, testNumberContains3) {
    EXPECT_EQ(fizzbuzz(13), "Fizz");
}

TEST(fizzbuzz, testNumberContains5) {
    EXPECT_EQ(fizzbuzz(50), "Buzz");
}