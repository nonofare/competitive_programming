#include <iostream>

int main() {
    long n;
    std::cin >> n;
    if (n & (n - 1)) {
        std::cout << "NIE" << std::endl;
    } else {
        std::cout << "TAK" << std::endl;
    }
    return 0;
}
