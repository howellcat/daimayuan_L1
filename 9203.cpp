#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0, num = 0;
    for (int i = 0; i < n; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[max_index])
                max_index = j;
        }
        if (i != max_index) {
            swap(a[i], a[max_index]);
        }
        num += a[i];
        if (num > m) {
            cout << sum;
            return 0;
        }
        sum++;
    }
    cout << sum;
}