#include "fizzbuzz.h"

int main() {
    for (int i {0}; i < 100; i++) {
        std::cout << fizzbuzz(i) << std::endl;
    }

    return 0;
}