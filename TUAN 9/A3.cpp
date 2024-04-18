#include <iostream>

using namespace std;

int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;// cố gắng xóa 1 phần của a nên bị lỗi

    cerr << "a after deleting c:" << "-" << a << "-" << endl; // do trước đó 1 phần a đã bị xóa nên khi in kết quả sẽ sinh ra lỗi


}
