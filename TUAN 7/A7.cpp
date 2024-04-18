#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int countOccurrences(const char* str1, const char* str2) {
    int count = 0;
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    // Tìm chuỗi con `str1` trong `str2`
    for (int i = 0; i <= length2 - length1; i++) {
        if (strncmp(str2 + i, str1, length1) == 0) {
            count++;
            i += length1 - 1; // Nhảy qua chuỗi vừa tìm thấy
        }
    }

    return count;
}

int main() {
    // Nhận hai chuỗi đầu vào từ người dùng
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    // Chuyển đổi chuỗi sang con trỏ kiểu const char*
    const char* str1_cstr = str1.c_str();
    const char* str2_cstr = str2.c_str();

    // Đếm số lần xuất hiện của str1 trong str2
    int count = countOccurrences(str1_cstr, str2_cstr);
    cout << count;

    return 0;
}
