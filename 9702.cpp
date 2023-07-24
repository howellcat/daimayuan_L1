#include <bits/stdc++.h>

using namespace std;

int h[2001], l[2001];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int x;
            scanf("%d", &x);
            if (x) {
                h[i] = 1;
                l[j] = 1;
            }
        }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
        if (!h[i])
            x++;
    for (int i = 0; i < m; i++)
        if (!l[i])
            y++;
    int sum = x * y;
    printf("%d", sum);
}
