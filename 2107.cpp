#include <bits/stdc++.h>

using namespace std;

int pow(int i, int m) {
    int sum = 1;
    for (int j = 1; j <= m; j++)
        sum *= i;
    return sum;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(i, m);
    printf("%d", sum);
}