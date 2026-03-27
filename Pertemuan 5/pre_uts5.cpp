#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input 2 numbers : ";
    cin >> a >> b;
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "FPB : " << a << endl;
}