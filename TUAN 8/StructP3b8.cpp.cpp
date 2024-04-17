#include <iostream>

using namespace std;
struct Point{
    int a, b;
};
int main(){
    Point p;

    cout << "dia chi bien" << &p << endl;
    cout << "dia chi truong a trong bien" << &p.a << endl;
    cout << "dia chi truong b trong bien" << &p.b << endl;
}


/*Nhận xét
Từ kết quả in ra, bạn có thể thấy rằng địa chỉ của p sẽ trùng với địa chỉ của p.a.
Địa chỉ của p.b sẽ lớn hơn địa chỉ của p.a bởi vì trường b được định nghĩa sau a trong struct.
Sự chênh lệch giữa địa chỉ của a và b phụ thuộc vào kích thước của kiểu dữ liệu int (4 byte trên hầu hết các hệ thống hiện đại).
Điều này cho thấy rằng các trường của Point được lưu trữ trong bộ nhớ theo thứ tự định nghĩa trong struct. Các trường a và b nằm liền kề nhau trong bộ nhớ.
