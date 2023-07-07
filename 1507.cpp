#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool t[1001];
    for (int i = 0; i < 1001; i++)
        t[i] = false;
    for (int i = 0; i < 1001; i++) {
        int x;
        cin >> x;
        t[x] = true;
    }
    int s = 0;
    for (int i = 0; i < 1001; i++)
        if(t[i])
            s++;
    cout << s << "\n";
    for (int i = 0; i < 1001; i++)
        if(t[i])
            cout << i << " ";

}