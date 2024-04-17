#include <iostream>

#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2;

    int k = str1.length();
    for(int i = k - 1; i >= 0; i--){
        str2 += str1[i];
    }

    if(str2 == str1){
        cout << "Yes";

    }else{
        cout << "No";
    }
}
