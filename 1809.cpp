#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[110], b[110], c[210];
    char n[110], m[110];
    scanf("%s%s", n, m);
    int lena = strlen(n), lenb = strlen(m);
    for (int i = lena - 1; i > -1; i--)a[i] = n[lena - (i + 1)] - '0';
    for (int i = lenb - 1; i > -1; i--)b[i] = m[lenb - (i + 1)] - '0';
    int len = lena + lenb;
    for (int i = 0; i < 211; i++)
        c[i] = 0;
    for (int i = 0; i < lena; i++)
        for (int j = 0; j < lenb; j++)
            c[i + j] += a[i] * b[j];
    for (int i = 0; i < len; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    for (; c[len] == 0 && len > 1;)
        len--;
    for (int i = len; i > -1; i--)
        printf("%d", c[i]);
}