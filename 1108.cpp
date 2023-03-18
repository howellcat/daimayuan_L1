#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(b > a)
        swap(a,b);
    for (int i = a; i >= b; i--) {
        if (i % 3 == 0)
            continue;
        else
            cout << i << endl;
    }
}