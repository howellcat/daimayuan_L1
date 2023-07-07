#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[101];
    for(int i = 0;i <= 100;i++)
        a[i] = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }
    int max = 0;
    for (int i = 0; i <= 100; i++)
        if (a[i] > max)
            max = a[i];
    for (int i = 0; i <= 100; i++)
        if (a[i] == max)
            cout << i << " ";
}