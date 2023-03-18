#include <iostream>
using namespace std;

int main(){
    int a[10001],n,max,min;
    cin >> n;
    for (int i = 0;i < n;i ++){
        cin >> a[i];
    }

    max = a[0],min = a[0];
    for (int i = 0;i < n;i ++){
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    cout << max << " " << min << endl;
    return 0;
}
