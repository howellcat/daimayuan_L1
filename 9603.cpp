#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    bool flag = false;
    for (; n > 0;) {
        if (n % 2)
            flag = true;
        if (flag)
            printf("%lld", n % 2);
        n /= 2;
    }
}
