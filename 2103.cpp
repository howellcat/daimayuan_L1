#include <bits/stdc++.h>

using namespace std;

int main() {
    char s1[20], s2[20], s3[20];
    scanf("%s%s%s", s1, s2, s3);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int len3 = strlen(s3);
    int sum = 0;
    for (int i = 0; i < len1; i++)
        if (s1[i] == 'a')
            sum++;
    printf("%d\n", sum);
    sum = 0;
    for (int i = 0; i < len2; i++)
        if (s2[i] == 'a')
            sum++;
    printf("%d\n", sum);
    sum = 0;
    for (int i = 0; i < len3; i++)
        if (s3[i] == 'a')
            sum++;
    printf("%d\n", sum);
}

