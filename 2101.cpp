#include <bits/stdc++.h>

using namespace std;

int sum = 1;

int factorial(int i) {
    sum *= i;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        factorial(i);
    printf("%d", sum);
}
