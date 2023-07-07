#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_index])
                max_index = j;
        }
        if (i != max_index) {
            swap(a[i], a[max_index]);
        }
    }
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (i < m){
            sum += a[i] * 2;
            continue;
        }
        sum += a[i];
    }
    cout << sum;
}