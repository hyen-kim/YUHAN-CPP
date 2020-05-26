#include <iostream>
#include "Point.h"
#include "ColorPoint.h"
using namespace std;


int main()
{
    Point p;    // 기본 클래스의 객체 생성
    ColorPoint cp;  // 파생 클래스의 객체 생성
    cp.set(3, 4);   // 기본 클래스의 멤버 호출
    cp.setColor("Red"); // 파생 클래스의 멤버 호출
    cp.showColorPoint();    // 파생 클래스의 멤버 호출

    system("pause");
}
