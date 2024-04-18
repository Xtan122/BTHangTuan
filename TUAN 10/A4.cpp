#include <iostream>

using namespace std;

int main(){
    int x = 16;

    int *p = &x;

    cout << *p;

    delete p;

}

//// Khi cố gắng giải phóng con trỏ p, điều này dẫn đến hành vi không ca==xác định
// vì p đang trỏ đến x mà x ko được cawps phát động nên giải ohongs không hợp lệ

