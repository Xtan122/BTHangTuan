#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool check = true;
    if(n < 2) check = false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) check = false;
    }
    if(check){
        cout << "yes";
    }else{ cout <<"no";}

}
