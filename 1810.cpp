#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[110];
    int a[150], n, len, x;
    for (int i = 0; i < 150; i++)
        a[i] = 0;
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++)
        a[i] = s[len - i - 1] - '0';

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        for (int j = 0; j < len + 1; j++)
            a[j] *= x;
        for (int j = 0; j < len + 1; j++) {
            a[j + 1] += a[j] / 10;
            a[j] %= 10;
        }
        while (a[len + 1] > 0) {
            len++;
            a[len + 1] = a[len] / 10;
            a[len] %= 10;
        }
    }
    while (a[len] == 0 && len > 0)
        len--;
    for (int i = len; i > -1; i--)
        printf("%d", a[i]);
}