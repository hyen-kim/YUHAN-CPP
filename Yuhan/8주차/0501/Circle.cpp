// cpp에서는 구현부

#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius) {
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

// 일반 멤버 함수
double Circle::getArea() {
    return 3.14 * radius * radius;
}
int Circle::getRadius() {
    return radius;
}
void Circle::setRadius(int radius) {
    this->radius = radius;
}
