#include <iostream>

using namespace std;
struct Point{
    int a, b;
};
struct Rect{
    Point A;
    int w, h;

    Rect(int x, int y, int width, int height){
        A.a = x;
        A.b = y;
        w = width;
        h = height;
    }

};

struct Ship{
    Rect rect;
    string id;
    int dx, dy;

    Ship(const string& ship_id, int x, int y, int width, int height, int speed_x, int speed_y)
        : rect(x, y, width, height), id(ship_id), dx(speed_x), dy(speed_y) {}


    move(){
        rect.A.a += dx;
        rect.A.b += dy;

    }
};
display(const Ship& ship){
    cout << ship.id << " " << ship.rect.A.a << " " << ship.rect.A.b << " ";
    cout << endl;
}

int main(){
    Ship ship("S1", 1, 1, 8, 2, 4, 5);
    display(ship);

    ship.move();
    display(ship);
}
