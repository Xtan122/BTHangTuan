#include <iostream>

using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100;    // gây lỗi vì cố tình gán giá trị vào ô nhớ p2 trỏ đến

    cout << *p2;  // lỗi vì đã bị giải phóng ô nhớ trước đó rồi
    delete p2;    // lỗi vì đã bị giải phóng trước đó rồi


}
