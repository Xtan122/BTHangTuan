#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;
void print_three_number(int a[], int n){
    int sum;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                sum = a[i] + a[j] + a[k];
                if(sum % 25 == 0) cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    srand(time(NULL));
    for(int i = 0; i  < n; i++){
        a[i] = rand() % 49;
    }
    print_three_number(a, n);
}
