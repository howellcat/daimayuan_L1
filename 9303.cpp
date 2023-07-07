#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = pow(n - 1, 10); i < pow(n, 10); i++) {
        int q = pow(10, i);
        if (a[i - 1] / q == 0)
            break;
    }

}