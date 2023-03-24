#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1, sum = 1; i <= n; i++) {
        for (int j = 1; j <= (n + 1) / 2 - (sum + 1) / 2; j++)
            cout << " ";
        for (int k = 1; k <= sum; k++){
            if(k % 2 == 0)
                cout << ".";
            else
                cout << "+";
        }
        cout << "\n";
        if(i >= (n + 1) / 2)
            sum -= 2;
        else
            sum += 2;
    }
}