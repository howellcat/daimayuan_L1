#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a, sum = 0; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                sum++;
        }
        if (sum == 2)
            printf("%d\n",i);
        sum = 0;
    }
}