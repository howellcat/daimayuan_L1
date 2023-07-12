#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[110];
    int a[110], b, c[110];
    scanf("%s", s);
    int lena = strlen(s);
    for (int i = 0; i < lena; i++)
        a[i] = s[lena - i - 1] - '0';
    scanf("%d", &b);
    int lenc = lena;
    for (int i = 0; i < 106; i++)
        c[i] = 0;
    int r = 0;
    for (int i = lena - 1; i > -1; i--) {
        r = r * 10 + a[i];
        c[i] = r / b;
        r %= b;
    }
    while (c[lenc] == 0 && lenc > 0)
        lenc--;
    for (int i = lenc; i > -1; i--)
        printf("%d", c[i]);
    printf("\n%d", r);

}