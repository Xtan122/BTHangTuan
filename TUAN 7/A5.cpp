#include <iostream>

using namespace std;

char* weird_string(){
    char c[] = "123345";
    return c;
}
int main(){
    char *s = weird_string();
    cout << s;
}
