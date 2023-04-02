#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[100001], flag = 1, s = 0, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for (int i = 1; i <= n; i++) {
        if (a[i - 1] < a[i])
            flag++;
        else if (flag > 1) {
            if (flag > max)
                max = flag;
            flag = 1;
            s++;
        }
    }
    cout << max;
}