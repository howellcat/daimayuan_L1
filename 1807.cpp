#include <bits/stdc++.h>

using namespace std;
#define maxn 100
int a[maxn], b[maxn], c[maxn];

int main() {
    char n[110], m[110];
    scanf("%s%s", n, m);
    int len = strlen(n);
    for (int i = strlen(n) - 1, j = 1; i >= 0; i--, j++)
        a[j] = n[i] - '0';
    for (int i = strlen(m) - 1, j = 1; i >= 0; i--, j++)
        b[j] = m[i] - '0';
    for (int i = 0; i < len + 1; i++) {
        c[i] += a[i] - b[i];
        if (c[i] < 0) {
            c[i + 1]--;
            c[i] += 10;
        }
    }
    while (c[len] == 0)
        len--;
    for (int i = len; i > 0; i--)
        printf("%d", c[i]);
}
