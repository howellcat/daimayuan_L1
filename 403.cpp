#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int a, b, c;
    cin >> a >> b >> c;
    if (a <= 100 && b <= 100 && c <= 100) {
        if (a < 80) {
            a = 80;
        }
        if (b < 80) {
            b = 80;
        }
        if (c < 80) {
            c = 80;}
        if(a + b + c > 270){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }

    return 0;
}