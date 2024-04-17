#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z;


    int a[4] = {1, 2, 3, 4};
    char b[4] = {'a', 'b', 'c', 'd'};


    int m, n, p;
    cout << &a[0] << endl;
    cout << &a[1] << endl;
    cout << &a[2] << endl;

    cout << (void *)&b[0] << endl;
    cout << (void *)&b[1] << endl;
    cout << (void *)&b[2] << endl;

    // Nhận xét:
    // - Địa chỉ của ba phần tử liên tiếp của mảng a (kiểu int) tăng dần theo thứ tự a[0], a[1], a[2].
    // - Sự chênh lệch giữa các địa chỉ này là 4 bytes vì kiểu int có kích thước 4 bytes trên hầu hết các hệ thống.
    // - Địa chỉ của ba phần tử liên tiếp của mảng b (kiểu char) tăng dần theo thứ tự b[0], b[1], b[2].
    // - Sự chênh lệch giữa các địa chỉ này là 1 byte vì kiểu char có kích thước 1 byte.
    // -> Điều này cho thấy rằng kích thước của kiểu dữ liệu ảnh hưởng đến sự chênh lệch của địa chỉ các phần tử liên tiếp trong mảng.
    cout << endl;

    cout << &x << endl;
    cout << &y << endl;
    cout << &z << endl;

    cout << endl;

    cout << &m << endl;
    cout << &n << endl;
    cout << &p << endl;
}
