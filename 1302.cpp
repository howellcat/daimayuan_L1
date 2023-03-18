#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    bool t = false;
    cin >> n;
    while (n != 0) {
        if (n % 10 == 7) {
            t = true;
            break;
        }
        n /= 10;
    }
    if (t)
        cout << "Yes";
    else
        cout << "No";
}