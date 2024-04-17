#include <iostream>
#include <vector>

using namespace std;
void distinctNumbers(){
    int n;
    vector <int> num;
    while(true){
        cin >> n;
        num.push_back(n);
        if(n < 0) break;

    }
    int size = num.size();
    for(int i = 0; i < size; i++){
        bool check = true;

            if(num[i] == num[i - 1]){
                check = false;

            }

        if(check) cout << num[i] << " ";
    }

}
int main (){
    distinctNumbers();
}



