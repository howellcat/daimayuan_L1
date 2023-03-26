#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for(int i = n;i >= 1;i--)
        cout << a[i - 1] << endl;
}