#include <iostream>
#include "Circle.h" // 클래스의 선언부를 가져옴
 
using namespace std;

// 클래스의 구현부
Circle::Circle() {  // Circle(); 자동호출
    radius = 1;     // int 형
    cout << "반지름 " << radius << "원 생성" << endl;
}
Circle::Circle(int r) { // Circle(30); 자동호출
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}
double Circle::getArea() {
    return 3.14 * radius * radius;
}