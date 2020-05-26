#include <iostream>
#include <string>
using namespace std;

class Point {
    // 멤버변수가 private로 존재
    int x, y;
public:
    void set(int x, int y);
    void showPoint();
};

// 멤버변수가 private이므로 멤버함수에서만 접근 가능
void Point::set(int x, int y) {
    this->x = x;
    this->y = y;
}
void Point::showPoint() {
    cout << "(" << x << "," << y << ")" << endl;
}



class ColorPoint : public Point {   // 부모의 멤버 함수에만 접근 가능 
    // 멤버변수가 private로 존재
    // 멤버함수에서만 접근 가능
    string color;
public:
    void setColor(string color);
    void showColorPoint();
};

void ColorPoint::setColor(string color) {
    this->color = color;
}

void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();
}

int main()
{
    Point p;    // 기본 클래스의 객체 생성
    ColorPoint cp;  // 파생 클래스의 객체 생성
    cp.set(3, 4);   // 기본 클래스의 멤버 호출
    cp.setColor("Red"); // 파생 클래스의 멤버 호출
    cp.showColorPoint();    // 파생 클래스의 멤버 호출

    system("pause");
}
