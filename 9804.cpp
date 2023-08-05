#include <bits/stdc++.h>

using namespace std;

char s[110];
int a[110], b[110], c[110], d[500], e[500];
int la, lb, lc, ld, le;

void change(char s[], int a[], int &la) {
    la = strlen(s);
    for (int i = 0; i < la; i++)
        a[i] = s[la - i - 1] - '0';
}

int main() {
    scanf("%s", s);
    change(s, a, la);
    scanf("%s", s);
    change(s, b, lb);
    scanf("%s", s);
    change(s, c, lc);
    ld = la + lb;
    for (int i = 0; i < la; i++)
        for (int j = 0; j < lb; j++)
            d[i + j] += a[i] * b[j];
    for (int i = 0; i < ld; i++)
        d[i + 1] += d[i] / 8, d[i] %= 8;
    if (!e[le])
        le--;
    if (!e[le])
        le--;
    le = ld + lc;
    for (int i = 0; i < lc; i++)
        for (int j = 0; j < ld; j++)
            e[i + j] += c[i] * d[j];
    for (int i = 0; i < le; i++)
        e[i + 1] += e[i] / 8, e[i] %= 8;
    if (!e[le])
        le--;
    if (!e[le])
        le--;

    for (int i = le; i > -1; i--)
        printf("%d", e[i]);
}