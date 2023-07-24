#include <bits/stdc++.h>

using namespace std;

int main() {
    char a[1001];
    int suma = 0;
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
        suma += a[i] - '0';
    printf("%d\n", suma);
    for (; suma > 9;) {
        int sumb = 0;
        for (; suma > 0;) {
            sumb += suma % 10;
            suma /= 10;
        }
        suma = sumb;
        printf("%d\n", suma);
    }
}
