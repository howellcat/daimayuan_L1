#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", max(max(a, b), max(b, c)));
}