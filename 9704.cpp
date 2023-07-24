#include <bits/stdc++.h>

using namespace std;

char s[110];
int a[110], b, c;

int main() {
    scanf("%s%d%d", s, &b, &c);
    int len = strlen(s) - 1;
    for (int i = 0; i < len + 1; i++)
        a[i] = s[len - i] - '0';
    b += c;
    a[0] += b;
    for (int i = 0; i < len; i++) {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    if (a[len + 1] > 0)
        len++;
    for (int i = len; i > -1; i--)
        printf("%d", a[i]);
}