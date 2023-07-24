#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[100];
    int ans = 0, len;
    scanf("%s", s);
    len = strlen(s) - 1;
    int num = 1;
    for (int i = len; i > -1; i--) {
        ans = ans + (s[i] - '0') * num;
        num *= 2;
    }
    printf("%d", ans);
}