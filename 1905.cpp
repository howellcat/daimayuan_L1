#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[100], len = -1;
    while (n > 0) {
        len++;
        a[len] = n % 8;
        n /= 8;
    }
    for (int i = len; i > -1; i--)
        printf("%d",a[i]);
}