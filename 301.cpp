#include<iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> d;
    a = (d % 100) % 10;
    b = (d % 100 - a) / 10;
    c = d / 100;
    cout << a + b + c;
    return 0;
} 