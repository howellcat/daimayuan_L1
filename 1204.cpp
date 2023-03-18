#include <bits/stdc++.h>

using namespace std;

string da(int a, char x) {
    string sum;
    for (int i = 1; i <= a; i++)
        sum += x;
    return sum;
}

int main() {
    int a, n;
    cin >> n >> a;
    for (int j = 1; j <= n; j++) {
        if (j % 2 == 0)
            cout << da(a, '.');
        else
            cout << da(a, '+');
        cout << "\n";
    }
}