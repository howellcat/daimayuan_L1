#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1001], b[1001], flag = 1, s = 0, sum = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for (int i = 1; i <= n; i++) {
        if (a[i - 1] == a[i])
            flag++;
        else if (flag > 1) {
            b[s] = flag;
            flag = 1;
            s++;
        }
    }
    for (int i = 1; i <= s; i++)
        if (b[i - 1] > sum)
            sum = b[i - 1];
    cout << sum;
}