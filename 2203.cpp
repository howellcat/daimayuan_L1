#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[2001] = {0};
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        a[x + 1000]++;
    }
    for (int i = 0; i < 2001; i++) {
        if (a[i] > 0)
            for (int j = 0; j < a[i]; j++)
                printf("%d ", i - 1000);
    }
}