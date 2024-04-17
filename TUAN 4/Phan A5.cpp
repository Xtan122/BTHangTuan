
#include <iostream>
using namespace std;

int main() {
    // Khai báo kích thước cho C-string
    const int N = 20;

    // Khai báo C-string với kích thước N
    char str[N];

    // Đọc từ bàn phím vào C-string

    cin >> str;  // Dùng cin để đọc chuỗi

    // In chuỗi ra màn hình với ký tự đặc biệt ở đầu và cuối
    cout << "_" << str << "_\n";

    return 0;
}
