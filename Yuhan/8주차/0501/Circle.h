// 헤더파일에는 선언부

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();

    // 함수의 원형  
    double getArea();
    int getRadius();
    void setRadius(int radius);
};

#endif // !CIRCLE_H

