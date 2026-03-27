#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Input number : ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    cout << "Output Reversed : " << reverse << endl;
}