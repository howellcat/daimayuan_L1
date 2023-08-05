#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int a[100];
    int i = 0;
    if (n == 0) {
        printf("0");
        return 0;
    }
    for (; n != 0;) {
        i++;
        a[i - 1] = n % k;
        n /= k;
    }
    for (int j = i - 1; j > -1; j--)
        if (a[j] < 10)
            printf("%d", a[j]);
        else
            printf("%c", a[j] - 10 + 'A');
}