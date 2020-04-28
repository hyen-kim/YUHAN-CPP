// 예제 4-1 객체  포인터 선언 및 활용
#include <iostream>
using namespace std;

// Circle이라는 객체 생성
class Circle {
    int radius; // 멤버 변수
public:
    // public형 생성자
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    // 값을 리턴
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut;
    Circle pizza(30);

    // 객체 이름으로 멤버 접근
    cout << donut.getArea() << endl;

    // 객체 포인터로 멤버 접근
    Circle* p;
    p = &donut;
    // 둘다 같은 호출문 ( 화살표로 호출하는 것이 좋음 )
    cout << p->getArea() << endl; // donut의 getArea() 호출
    cout << (*p).getArea() << endl; // donut의 getArea() 호출

    p = &pizza;
    cout << p->getArea() << endl;   // pizza의 getArea() 호출
    cout << (*p).getArea() << endl;   // pizza의 getArea() 호출

    system("pause");
}
