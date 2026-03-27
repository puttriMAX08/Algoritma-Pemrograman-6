#include <iostream>
using namespace std;

int main() {
    int num, quad, sum = 0;

    cout << "Input number : ";
    cin >> num;

    quad = num * num;

    while (quad != 0) {
        sum += quad % 10;
        quad /= 10;
    }

    if (sum == num)
        cout << "Angka neon";
    else
        cout << "Bukan angka neon";
}