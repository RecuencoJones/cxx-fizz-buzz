#include "fizzbuzz.h"

std::string fizzbuzz(int n) {
    std::string result {std::to_string(n)};
    bool isDivisibleBy3 = n % 3 == 0;
    bool isDivisibleBy5 = n % 5 == 0;
    bool contains3 = result.find("3") != std::string::npos;
    bool contains5 = result.find("5") != std::string::npos;

    if (isDivisibleBy3 || contains3) {
        result = "Fizz";
    }

    if (isDivisibleBy5 || contains5) {
        result = "Buzz";
    }

    if (isDivisibleBy3 && isDivisibleBy5) {
        result = "FizzBuzz";
    }

    return result;
}