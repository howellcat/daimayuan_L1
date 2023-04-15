/*#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a[101], sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i - 1];
    for (int i = 0; i < n; i++)
        sum += n - i;
    for (int i = 1; i <= sum; i++)
        for (int j = 1; j <= n - 1; j++)
            if (a[j - 1] < a[j])
                swap(a[j - 1], a[j]);
    for (int i = n; i >= 1; i--)
        cout << a[i - 1] << " ";
}*/
//冒泡排序
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a[101];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index])
                min_index = j;
        }
        if (i != min_index) {
            swap(a[i], a[min_index]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
//选择排序
