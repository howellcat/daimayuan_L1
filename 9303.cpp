#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0, l = 1, r = 1;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        l *= 10;
    r = 10 * l - 1;
    for (int i = l; i <= r; i++) {
        sum = 0;
        int m = i;
        while (m > 0) {
            int t = m % 10;
            int s = 1;
            for (int j = 1; j <= n; j++)
                s *= t;
            sum += s;
            m /= 10;
        }
        if (sum == i)
            printf("%d\n", i);  /* 也可以写成 printf("%d\n", sum); */
    }
}
