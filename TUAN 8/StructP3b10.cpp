#include <iostream>

using namespace std;

// Định nghĩa một struct chứa mảng
struct InnerStruct {
    int data[3];
};

// Định nghĩa một struct chứa con trỏ đến InnerStruct
struct Point {
    int a, b;
    InnerStruct* innerPtr;
};

int main() {
    // Khai báo và khởi tạo biến Point
    Point p1;
    p1.a = 10;
    p1.b = 20;

    // Khai báo InnerStruct
    InnerStruct inner;
    inner.data[0] = 1;
    inner.data[1] = 2;
    inner.data[2] = 3;

    // Gán con trỏ innerPtr của p1 tới InnerStruct
    p1.innerPtr = &inner;

    // Sao chép nông (shallow copy) biến p1 sang p2
    Point p2 = p1;

    // In thông tin của p1 và p2
    cout << "p1: a = " << p1.a << ", b = " << p1.b << ", innerPtr address = " << p1.innerPtr << endl;
    cout << "p2: a = " << p2.a << ", b = " << p2.b << ", innerPtr address = " << p2.innerPtr << endl;

    // Thay đổi giá trị của mảng thông qua p2.innerPtr
    p2.innerPtr->data[0] = 100;

    // In lại giá trị mảng của inner qua p1 và p2
    cout << "p1 innerPtr data: " << p1.innerPtr->data[0] << ", " << p1.innerPtr->data[1] << ", " << p1.innerPtr->data[2] << endl;
    cout << "p2 innerPtr data: " << p2.innerPtr->data[0] << ", " << p2.innerPtr->data[1] << ", " << p2.innerPtr->data[2] << endl;

    return 0;
}
