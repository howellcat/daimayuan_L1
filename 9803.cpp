#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_index])
                min_index = j;
        if (i != min_index)
            swap(a[i], a[min_index]);
        min_index = i + 1;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_index])
                min_index = j;
        if (i != min_index)
            swap(a[i + 1], a[min_index]);
        sum += a[i] + a[i + 1];
        a[i + 1] += a[i];
    }
    printf("%d", sum);
}