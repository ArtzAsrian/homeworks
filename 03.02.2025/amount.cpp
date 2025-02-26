#include <iostream>
using namespace std;
int main() {
    int number = 0;
    int sum = 0;

    std::cout << "num?";
    std::cin >> number;

    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    std::cout << sum <<std::endl;

    return 0;

}
