#include <iostream>

using namespace std;

long factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}
int main (){
    int x = 4;

    long Giaithua = factorial(x);
    cout << Giaithua;
    cout << " x = " << x << "at" << &x << endl;
}
