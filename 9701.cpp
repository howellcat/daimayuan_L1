#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int sum = 0;
    if (a % 4 != 0)
        a = a / 4 * 4 + 4;
    b = b / 4 * 4;
    if (a == b) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                printf("1");
                return 0;
            } else {
                printf("0");
                return 0;
            }
        }
        if (a % 4 == 0) {
            printf("1");
            return 0;
        } else {
            printf("0");
            return 0;
        }
    }
    for (int i = a; i <= b; i += 4)
        sum++;
    sum = sum - (b / 100 - a / 100) + (b / 400 - a / 400); // 去重
    // sum = 没去重的数 - [a, b]中能整除100的数 + [a, b]中能整除400的数
    printf("%d", sum);
}