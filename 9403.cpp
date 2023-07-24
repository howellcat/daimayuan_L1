#include <bits/stdc++.h>

using namespace std;

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

int min(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i + 1] - a[i] > sum)
            sum = a[i + 1] - a[i];
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("%d", min(a, n));
}
