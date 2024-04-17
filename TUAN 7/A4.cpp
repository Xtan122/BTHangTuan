#include <iostream>

using namespace std;

int binarySearch(int *a, int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x) {
            return mid; // Tìm thấy phần tử
        } else if (a[mid] < x) {
            left = mid + 1; // Tìm ở nửa phải
        } else {
            right = mid - 1; // Tìm ở nửa trái
        }
    }
    return -1; // Không tìm thấy phần tử
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 2;

    int res = binarySearch(a, 10, x);
    cout << res;
}
