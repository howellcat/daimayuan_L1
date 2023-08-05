#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    int sum;
    sum = (n + x - 1) % 7;
    switch (sum) {
        case 0:
            printf("Sunday");
            return 0;
        case 1:
            printf("Monday");
            return 0;
        case 2:
            printf("Tuesday");
            return 0;
        case 3:
            printf("Wednesday");
            return 0;
        case 4:
            printf("Thursday");
            return 0;
        case 5:
            printf("Friday");
            return 0;
        case 6:
            printf("Saturday");
            return 0;
    }
}