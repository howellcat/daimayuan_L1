#include <bits/stdc++.h>

using namespace std;
string s;
int c;

int main() {
    while (cin >> s)
        c += s.size();
    printf("%d", c);
    return 0;
}