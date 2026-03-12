#include <iostream>
using namespace std;

int main() {
    system ("cls");
    //Laboratorium Ilmu Komputer

    // goto a;
    // b :
    // cout << "Ilmu";
    // goto c;

    // a :
    // cout << "Laboratorium";
    // goto b;

    // c :
    // cout << "Komputer";

    //label :
    //goto label;

    int a = 1;

    x : 
    cout << a << " ";
    a++; // 1 increment (+) = 2

    if ( a <= 10 ) {
        goto x;
    }
    
}