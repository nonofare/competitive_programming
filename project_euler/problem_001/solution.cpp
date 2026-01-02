#include <iostream>

int main() {
    uint64_t sum{};

    for (int i = 1000; i > 0; i--) {
        if (!(i % 3) || !(i % 5)) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}