#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int flag = 0, sum = 1;
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= n - sum; j++)
            cout << " ";
        for (int j = 1; j <= sum; j++) {
            cout << "+";
        }
        cout << "\n";
        if (sum >= n)
            flag = 1;
        if (flag == 1)
            sum--;
        else
            sum++;
    }
}
