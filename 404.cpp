#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int a, b, c;
    cin >> a >> b >> c;
    unsigned int x = a + b + c;
    if (a <= 100 && b <= 100 && c <= 100) {
        if (x > 270) {
            cout << "三好学生";
        } else if (x > 240) {
            cout << "优秀学习标兵";
        } else {
            cout << "什么都评不上";
        }

    }

    return 0;
}