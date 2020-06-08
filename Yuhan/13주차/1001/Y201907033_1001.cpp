// 예제 10-1 제네릭 myswap() 함수 만들기 

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) {
        this->radius = radius;
    }
    int getRadius() { return radius; }
};

// 클래스 T는 변환하는 부분
// 구체화를 하게 되는 부분
template <class T>
void myswap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


int main()
{
    int a = 4, b = 5;
    myswap(a, b);           // myswap(int& a, int& b) 함수 구체화 및 호출
    cout << "a=" << a << "," << "b=" << b << endl;

    double c = 0.3, d = 12.5;
    myswap(c, d);           // myswap(double& a, double b) 함수 구체화 및 호출
    cout << "c=" << c << "," << "d=" << d << endl;

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << "donut 반지름 = " << donut.getRadius() << endl;
    cout << "pizza 반지름 = " << pizza.getRadius() << endl;
}

