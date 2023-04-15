#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, a[100001];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[max_index])
                max_index = j;
        }
        if (i != max_index) {
            swap(a[i], a[max_index]);
        }
    }

    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
}