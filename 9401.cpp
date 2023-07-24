#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100 % 10;
    int d = n / 1000 % 10;
    int sum = a + b + c + d;
    for (int i = 1; i < 3; i++) {
        int j = sum / pow(i - 1, 10);
        j %= 10;
        if (j == 7) {
            printf("%s", "Yes");
            return 0;
        }
    }
    printf("%s", "No");
}