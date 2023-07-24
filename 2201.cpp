#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, p;
    scanf("%d%d%d%d", &n, &m, &k, &p);
    char name[15][15][110][15];
    memset(name, 0, sizeof(name));
    for (int i = 0; i < p; i++) {
        int g, c, num;
        scanf("%d%d%d", &g, &c, &num);
        scanf("%s", name[g][c][num]);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int g, c, num;
        scanf("%d%d%d", &g, &c, &num);
        if (strlen(name[g][c][num]) == 0)
            printf("Error\n");
        else
            printf("%s\n", name[g][c][num]);
    }
}