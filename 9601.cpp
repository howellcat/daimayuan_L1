#include <bits/stdc++.h>

using namespace std;

int main() {
    char s1[1010], s2[20];
    scanf("%s%s", s1, s2);
    int l1 = strlen(s1), l2 = strlen(s2);
    for (int i = 0; i < l1 - (l2 - 1); i++) {
        bool sum = true;
        for (int j = 0; j < l2; j++)
            if (s1[i + j] != s2[j])
                sum = false;
        if (sum) {
            printf("%s", "Yes");
            return 0;
        }
    }
    printf("%s", "No");
}
