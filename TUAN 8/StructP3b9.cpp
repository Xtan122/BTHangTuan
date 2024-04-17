#include <iostream>

using namespace std;
struct Point{
    int a, b;

};

void passbyValue(Point p){
    cout << &p;
}
void passbyReference(Point& p){
    cout << &p;
}
int main(){
    Point p;
    cin >> p.a >> p.b;
    passbyValue(p);
    cout << endl;
    passbyReference(p);

}
