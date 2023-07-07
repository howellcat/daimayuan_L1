#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[110], b;
    char s[110];
    scanf("%s%d", s, &b);
    int len = strlen(s) - 1;
    for (int i = 0; i < len + 1; i++)
        a[i] = s[i] - '0';
    a[len] += b;
    for (int i = len; i > -1; i--)
        if (a[i] > 9) {
            a[i] %= 10;
            a[i - 1] += 1;
        }
    for (int i = 0; i < len + 1; i++)
        printf("%d", a[i]);
}