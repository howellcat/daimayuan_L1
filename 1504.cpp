#include <iostream>
using namespace std;

const int MAX_VALUE = 100;

// 计数排序函数
void countingSort(int arr[], int n) {
    int count[MAX_VALUE + 1] = {0}; // 初始化计数数组
    for (int i = 0; i < n; i++) {
        count[arr[i]]++; // 统计每个元素出现的次数
    }
    for (int i = MAX_VALUE; i >= 1; i--) {
        count[i - 1] += count[i]; // 计算每个元素在有序数组中的位置
    }
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[--count[arr[i]]] = arr[i]; // 从后往前遍历原数组，将元素放入有序数组中正确的位置
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i]; // 将有序数组复制回原数组
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countingSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
