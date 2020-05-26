#ifndef COLORPOINT_H
#define COLORPOINT_H

#include <string>
using namespace std;
#include "Point.h"  // 상속 받았기 때문에 소스가 필요

class ColorPoint : public Point {   // 부모의 멤버 함수에만 접근 가능 
    // 멤버변수가 private로 존재
    // 멤버함수에서만 접근 가능
    string color;
public: 
    void setColor(string color);
    void showColorPoint();
};

#endif // !COLORPOINT_H
