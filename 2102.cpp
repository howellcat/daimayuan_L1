#include <bits/stdc++.h>

using namespace std;

int a, b;

void q(int i) {
    if (i == 1)
        printf("%d\n", a + b);
    if (i == 2)
        printf("%d\n",a - b);
    if (i == 3)
        printf("%d\n",a * b);
    if(i == 4)
        printf("%d\n",a / b);
}

int main() {
    scanf("%d%d", &a, &b);
    q(1);
    q(2);
    q(3);
    q(4);
}
