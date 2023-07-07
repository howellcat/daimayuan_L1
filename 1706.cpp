#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[15];
    int sum = 0;
    scanf("%[^\n]", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ')
            sum++;
    }
    printf("%d\n", sum);
}