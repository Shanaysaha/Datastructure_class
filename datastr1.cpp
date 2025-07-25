#include <iostream>
int main() {
    const int size = 11;
    int evenNumbers[size]
    for (int i = 0; i < size; ++i) {
        evenNumbers[i] = i * 2;
    }
    std::cout << "Even numbers from 0 to 20:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << evenNumbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
