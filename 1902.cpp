#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[100], len = -1;
    while (n > 0) {
        len++;
        a[len] = n % 16;
        n /= 16;
    }
    for (int i = len; i > -1; i--)
        if (a[i] < 10)
            printf("%d", a[i]);
        else
            printf("%c", a[i] + 'A' - 10);
}