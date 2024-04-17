// A    B
// C    D
#include <iostream>

using namespace std;

struct Point {
    int a, b;
};
Point pointB(Point p, int w, int h){
    Point result;
    result.a = p.a + w;
    result.b = p.b;

    return result;
}

Point pointC(Point p, int w, int h){
    Point result;
    result.a = p.a;
    result.b = p.b - h;

    return result;
}
Point pointD(Point p, int w, int h){
    Point result;
    result.a = p.a + w;
    result.b = p.b - h;

    return result;
}

struct Rect{
    int x, y;
    int w, h;
    Point A;
    /*Rect(int x, int y, int w, int h) : x(x), y(y), w(w), h(h) {
        A.a = x;
        A.b = y;
    }
*/

    bool contain(Point X){
        Point B = pointB(A, w, h);
        Point C = pointC(A, w, h);
        Point D = pointD(A, w, h);

        if(X.a >= A.a && X.a <= B.a && X.b <= A.b && X.b >= D.b){
            return true;
        }
        return false;
    }
};


int main(){
    Rect HCN;

    cin >> HCN.x >> HCN.y;
    cin >> HCN.w >> HCN.h;

    Point X;
    cin >> X.a >> X.b;

    bool answer = HCN.contain(X);
    if(answer){
        cout << "YES";
    }else{
        cout << "NO";
    }

}
