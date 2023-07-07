#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 10) {
        cout << "任务失败";
        return 0;
    }
    if (n > 4) {
        if (n >= 9){
            cout << "12:56";
            return 0;
        }
        cout << "12:" << 60 - (n - 4);
        return 0;
    }
    cout << "13:0" << 3 - n + 1;
}
