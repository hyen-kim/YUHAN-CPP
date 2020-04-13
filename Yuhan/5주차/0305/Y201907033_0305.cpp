// 예제 3-5 멤버변수의 초기화와 위임 생성자 활용
// 다음 Point 클래스의 멤버 x, y를 생성자 서두에 초기값으로 초기화하고
// 위임 생성자를 이용하여 재작성하여라.

#include <iostream>
using namespace std;

// 클래스 선언부
class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show() { cout << "(" << x << "," << y << ")" << endl; }
};

// 클래스 생성부
Point::Point() : Point(0,0) {}  // 위임생성자

Point::Point(int a, int b) {
    x = a;
    y = b;
}


int main()
{
    Point origin(10, 20);
    origin.show();

    system("pause");

}
