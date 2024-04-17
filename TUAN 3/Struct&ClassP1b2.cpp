#include <iostream>

using namespace std;

struct Point {
    int x, y;
};

void print(Point &p){
    cout << p.x << " " << p.y;
}

void passbyValue(Point p){
    p.x += 10;
    p.y += 10;
    print(p);
}
void passbyReference(Point* p){
    p->x += 10;
    p->y += 10;
    print(*p);
}
int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);

    //truyen tham tri;
    passbyValue(point);
    print(point);
    cout << endl;


    //truyen tham bien
    passbyReference(&point);
    print(point);

}
