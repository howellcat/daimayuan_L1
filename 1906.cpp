#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[20];
    int ans = 0, len;
    scanf("%s", s);
    len = strlen(s) - 1;
    int num = 1;
    for (int i = len; i > -1; i--) {
        int t = s[i] - '0';
        if (t < 10)
            ans += t * num;
        else
            ans += (t - 7) * num;
        num *= 8;
    }
    printf("%d\n", ans);
}
