#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[110], b, c[110];
    char s[110];
    scanf("%s%d", s, &b);
    int len = strlen(s);
    for (int i = len; i > -1; i--)
        a[i] = s[len - (i + 1)] - '0';
    for (int i = 0; i < 110; i++)
        c[i] = 0;
    for (int i = 0; i < len; i++) {
        c[i] = a[i] * b + c[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    for (; c[len + 1] > 0;) {
        ++len;
        c[len + 1] = c[len] / 10;
        c[len] %= 10;
    }
    for (; c[len] == 0 && len > 1;)
        len--;
    for (int i = len; i > -1; i--)
        printf("%d", c[i]);
}