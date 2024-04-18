#include <iostream>
#include <cstring>
using namespace std;

struct String{
    int n;
    char* str;
    String(const char* input){
        n = strlen(input);
        str = new char[n + 1];
        strcpy(str, input);
    }

    ~String(){
        delete[] str;
    }

    void print()const{
        cout << str << endl;
    }
   void append(const char* new_str)const {
        int new_length = strlen(new_str);
        char* temp = new char[n + new_length + 1];
        strcpy(temp, str);
        strcat(temp, new_str);
        cout << temp;
   }
};
int main(){
    String S("Hi");

    S.print();
    S.append(" there");



    return 0;
}

