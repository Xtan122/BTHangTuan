#include<iostream>

using namespace std;

struct Point{
    int x;
    int y;
};
void print(Point p){
    cout << p.x << " " << p.y << endl;

}
Point mid_point(const Point p1, const Point p2) {
    Point result;
    result.x = (p1.x + p2.x)/(double)2;
    result.y = (p1.y + p2.y)/(double)2;

    return result;
}
int main(){
    Point p1, p2;
    cin >> p1.x >> p1.y;
    cin >> p2.x >> p2.y;

    Point result;
    result = mid_point(p1, p2);
    print(result);
}
