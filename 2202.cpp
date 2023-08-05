#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                scanf("%d", &a[i][j][k]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++)
                printf("%d ", a[j][k][i]);
            printf("\n");
        }
}