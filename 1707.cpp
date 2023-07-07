#include <bits/stdc++.h>

using namespace std;

int main() {
    char s[110];
    int a[3] = {0, 0, 0};
    int max = 0;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a'){
            a[0]++;
            continue;
        }
        if (s[i] == 'b'){
            a[1]++;
            continue;
        }
        if (s[i] == 'c')
            a[2]++;
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] > a[max])
            max = i;
    }
    printf("%d\n", a[max]);
}