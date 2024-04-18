#include <iostream>
#include <cstring>

using namespace std;
char *concat(const char* str1, const char* str2){

    int k1 = strlen(str1);
    int k2 = strlen(str2);
    int lengthR = k1 + k2;
    char *result = new char[lengthR + 1];

    strcpy(result, str1);
    strcat(result, str2);

    return result;

}
int main(){
    char* str1 = new char[100];
    char* str2 = new char[100];
    cin >> str1 >> str2;

    char *res = concat(str1, str2);
    cout << res;
}

