#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[110];
    int m;
    scanf("%s%d", s, &m);
    int len = strlen(s);
    int num = m % len;
    for (int i = num; i < len; i++)
        printf("%c", s[i]);
    for (int i = 0; i < num; i++)
        printf("%c", s[i]);
}