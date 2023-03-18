#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
        if (i % 5 == 0 || i % 7 == 0)
            cout << i << endl;
    return 0;
}