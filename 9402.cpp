#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[n];
    int sum = 0, num = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 10)
            sum++;
        else if (a[i] - k < 10)
            num++;
    }
    if (num > m)
        printf("%d", m + sum);
    else
        printf("%d", num + sum);
}

