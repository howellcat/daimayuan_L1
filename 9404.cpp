#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[110];
    int a[110], b[110], c[210];
    int n, lena, lenb, lenc;
    scanf("%s", s);
    lena = strlen(s);
    for (int i = 0; i < lena; i++)
        a[i] = s[lena - i - 1] - '0';
    scanf("%s", s);
    lenb = strlen(s);
    for (int i = 0; i < lenb; i++)
        b[i] = s[lenb - i - 1] - '0';
    scanf("%d", &n);
    lenc = lena + lenb;
    for (int i = 0; i < 210; i++)
        c[i] = 0;
    for (int i = 0; i < lena; i++)
        for (int j = 0; j < lenb; j++)
            c[i + j] += a[i] * b[j];
    for (int i = 0; i < lenc; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    for (int i = 0; i < lenc; i++)
        c[i] = c[i] * n;
    lenc += 3;
    for (int i = 0; i < lenc; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while (c[lenc] == 0)
        lenc--;
    for (int i = lenc; i > -1; i--)
        printf("%d", c[i]);
}