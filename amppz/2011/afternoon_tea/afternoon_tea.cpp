#include <iostream>

int main() {
    int n;
    std::cin >> n;

    char word[n];
    std::cin >> word;

    double actual_h, actual_m = 0.5;
    double drunken_h, drunken_m = 0.0;

    for (int i = 0; i < n; i++) {
        actual_h /= 2;
        actual_m /= 2;
        drunken_h += actual_h;
        drunken_m += actual_m;
        if (word[i] == 'H') {
            actual_h += 0.5;
        } else {
            actual_m += 0.5;
        }
    }

    if (drunken_h > drunken_m) {
        std::cout << "H" << std::endl;
    } else if (drunken_m > drunken_h) {
        std::cout << "M" << std::endl;
    } else {
        std::cout << "HM" << std::endl;
    }

    return 0;
}
