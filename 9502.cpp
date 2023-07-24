#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    char s[n + 10];
    scanf("%s", s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            s[i] = '1';
            continue;
        }
        if (s[i] == '1') {
            s[i] = '2';
            continue;
        }
        if (s[i] == '2') {
            s[i] = '3';
            continue;
        }
        if (s[i] == '3')
            s[i] = '9';
    }
    printf("%s", s);
}
