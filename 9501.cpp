#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        if (a[i] > m) {
            printf("%d", i);
            return 0;
        }
        m -= a[i];
    }
    printf("%d", n);
}
