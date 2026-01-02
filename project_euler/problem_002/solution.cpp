#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int sum = b;

    while (sum < 4000000) {
        int c = a + b;
        a = b;
        b = c;
        if (c & 0x01) {
            sum += c;
        }
    }

    printf("%d", sum);
    return 0;
}
