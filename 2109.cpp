#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_index])
                min_index = j;
        if (i != min_index)
            swap(a[i], a[min_index]);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}