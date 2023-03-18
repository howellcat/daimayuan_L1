#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a <= b) {
        if (a % 10 == 0 || a % 3 == 0)
            cout << a << endl;
        a++;
    }
    return 0;
}