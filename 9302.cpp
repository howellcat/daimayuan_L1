#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < 3; i++)
        swap(n[i], n[3]);
    for (int i = 0; i < 4; i++)
        cout << n[i];
}
