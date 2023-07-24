#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (n & 1)
            sum++;
        n >>= 1;
    }
    printf("%d", sum + 3);

}
