#include <bits/stdc++.h>

using namespace std;

void print(int n, int a[], int b[], int x) {
    for (int i = 0; i < n; i++) {
        if (b[i] == x) {
            cout << a[i] << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
    }
    print(n, a, b, 0);
    print(n, a, b, 1);

}