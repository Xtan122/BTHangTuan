#include <iostream>

using namespace std;

int count_even(int *a, int n){
    int count  = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            count ++;
        }
    }
    return count;

}
int count_even_head(int *a, int n){
    int count  = 0;
    for(int i = 0; i < 5; i++){
        if(a[i] % 2 == 0){
            count ++;
        }
    }
    return count;

}
int count_even_leg(int *a, int n){
    int count  = 0;
    for(int i = 4; i < n; i++){
        if(a[i] % 2 == 0){
            count ++;
        }
    }
    return count;

}


int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << count_even(a, 10) << endl;
    cout << count_even_head(a, 10) << endl;
    cout << count_even_leg(a, 10) << endl;
}

