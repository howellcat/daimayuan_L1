#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1001], sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for (int i = 1; i <= n - 1; i++)
        if (a[i - 1] > a[n - 1])
            sum++;
    cout << sum;
}