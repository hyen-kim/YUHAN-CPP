#include "Point.h"
#include <iostream>
using namespace std;


// 멤버변수가 private이므로 멤버함수에서만 접근 가능
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::showPoint() {
    cout << "(" << x << "," << y << ")" << endl;
}



