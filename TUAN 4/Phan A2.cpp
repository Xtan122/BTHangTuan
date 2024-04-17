#include <iostream>
#include <cstring>
using namespace std;

int mangngoai[10];

//char b1_ngoai[3] = "abcd";
char b2_ngoai[10] = "abcd";
//char b3_ngoai[4] = "abcd";

char c_ngoai[] = "abcd";
void print(int a[], int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    cout << a;

}
void PRINT(char *a, int n){
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    cout << a;
}
int main(){
    int mangtrong[10];
    print(mangngoai, 10);
    print(mangtrong, 10);

    //char b1_trong[1] = "abcd";
    char b2_trong[10] = "abcd";
    //char b3_trong[4] = "abcd";

    //PRINT(b1_ngoai, 1);
    //PRINT(b1_trong, 1);
    PRINT(b2_ngoai, 10);
    PRINT(b2_trong, 10);
    //PRINT(b3_ngoai, 4);
    //PRINT(b3_trong, 4);

    char c_trong[] = "abcd";
    int k_ngoai = sizeof(c_ngoai);
    int k_trong = sizeof(c_trong);

    PRINT(c_ngoai, k_ngoai);
    PRINT(c_trong, k_trong);

}
