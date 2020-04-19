#ifndef CIRCLE_H // circle이 정의되어 있지 않으면
#define CIRCLE_H 

// Circle 선언부
class Circle {
public:
    int radius;          // 멤버변수
    Circle();            // 매개 변수 없는 생성자
    Circle(int r);       //매개 변수 있는 생성자
    double getArea();   // 멤버함수
};

#endif 