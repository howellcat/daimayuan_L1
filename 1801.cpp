#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    char s1, s2;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%c%c", &s1, &s2);
        x = s2 - '0';
        printf("%d\n", x);
    }
}