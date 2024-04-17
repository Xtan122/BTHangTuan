#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main(){
    int a[30];

    srand (time(NULL));
    for(int i = 0; i < 30; i++) a[i] = rand()%100;


    print(a, 30);
    cout << endl;

    bubbleSort(a, 30);
    print(a, 30);
}
