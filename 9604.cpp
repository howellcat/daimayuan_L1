#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int max = 0;
        for (int j = max; j < n; j++)
            if (a[j] > a[i])
                max++;
        printf("%d ", max + 1);
    }
}