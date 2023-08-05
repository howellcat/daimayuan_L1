#include <bits/stdc++.h>

using namespace std;

int main() {
    //规律：3个数里有两个奇数
    //原理：奇数 + 奇数 = 偶数，奇数 + 偶数 = 奇数
    long long n;
    scanf("%lld", &n);
    printf("%lld", n / 3 * 2 + n % 3);
}