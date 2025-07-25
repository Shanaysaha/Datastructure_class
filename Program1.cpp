//Write a program to all the evenn numbers between 0 and 20
#include <iostream>
using namespace std;
int main() {
    const int size = 11;
    int evenNumbers[size];
    for (int i = 0; i < size; ++i) {
        evenNumbers[i] = i * 2;
    }
    cout << "Even numbers from 0 to 20:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << evenNumbers[i] << " ";
    }
    cout << endl;
    return 0;
}
