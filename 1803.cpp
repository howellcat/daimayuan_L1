#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[110];
    char s[110];
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        a[i] = s[i] - '0';
    for (int i = len - 1; i > -1; i--)
        printf("%d",a[i]);
}