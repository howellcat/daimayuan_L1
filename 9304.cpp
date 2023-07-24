#include <bits/stdc++.h>

using namespace std;

int main() {
    char n[4];
    scanf("%s", n);
    bool a = false, b = true;
    for (int i = 0; i < 4; i++) {
        if (n[i] - '0' == 7) {
            a = true;
            continue;
        }
        if (n[i] - '0' == 4) {
            b = false;
            continue;
        }
    }
    if (a && b)
        printf("%s", "Yes");
    else
        printf("%s", "No");
}