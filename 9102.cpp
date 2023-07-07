#include <bits/stdc++.h>

using namespace std;

int main() {
    int j = 0, o = 0;
    char n[13];
    cin >> n;
    for (int i = 0; i < strlen(n); i++) {
        if ((int) n[i] % 2 == 0)
            o++;
        else
            j++;
    }
    if(j > o)
        cout << "Odd";
    else
        cout << "Even";
}