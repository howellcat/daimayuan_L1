#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 9)
        cout << "13:" << 38 - n;
    else
        cout << "13:29";
}