#include <iostream>

using namespace std;
int kichthuoc(int *a){
    int res = sizeof(a);
    return res;
}

int main(){
    int a[100];
    int b[10];



    cout << sizeof(a) << endl;
    cout << kichthuoc(a) << endl;

    cout << sizeof(b) << endl;
    cout << kichthuoc(b) << endl;
}
