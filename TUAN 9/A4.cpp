#include <iostream>

using namespace std;

int main(){
    int x = 16;

    int *p = &x;

    cout << *p;

    delete p;

}


