#include <iostream>

using namespace std;
bool check(int a[], int N){
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Nếu hai phần tử bằng nhau, trả về true
            if (a[i] == a[j]) {
                return true;
            }
        }
    }

    return false;
}
void print(bool res){
    if(res){
        cout << "YES";
    }else{
        cout << "NO";
    }
}
int main(){
    int N;
    cin >> N;

    int a[N];
    for(int i = 0; i < N; i++) cin >> a[i];

    bool res = check(a, N);
    print(res);

}
