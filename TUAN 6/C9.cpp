#include <iostream>
#include<cstdlib>

using namespace std;
int Random(int n){

    return rand() % n;
}
int main(){
    int n;
    cin >> n;
    cout << Random(n);
}
