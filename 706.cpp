#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, sum;
    cin >> a >> b >> c >> d;
//===============初始化===============
    if (c > b || a > d) {
        cout << 0;
        return 0;
    }
//==========判断是否重合(不)=========
    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    if (a < d)
        swap(a, d);
    if (b < c)
        swap(b, c);
    if (b < d)
        swap(b, d);
    if (c < d)
        swap(c, d);
//================排序===============
    for (int i = c; i <= b; i++)
        sum++;
//============计数次大值到次次大值的数有多少个===========
    cout << sum - 1; //打印
    return 0;
}