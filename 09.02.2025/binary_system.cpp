#include <iostream>
int main() {
    int a = 0;
    int b = 1;
    std::cin >> a;
    if (a == 0) std::cout << 0;
    else {

    while (b <= a) b = b << 1;

    while (b > 1) {
        b = b >> 1;
        std::cout << (((b & a) != 0) ? 1 : 0);
        }
    }
    return 0;
}
