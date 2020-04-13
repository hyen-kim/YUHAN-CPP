// 예제 3-4 생성자에서 다른 생성자 호출 연습 (위임 생성자 만들기)

#include <iostream>
using namespace std;


// Circle 선언부
class Circle {
public:
    int radius;
    Circle();            // 위임 생성자 : 다른 생성자를 호출해서 동작하는 방식
    Circle(int r);       // 타겟 생성자 : 위임생성자에 의해 호출되는 생성자
    double getArea();   // 멤버함수
};


// Circle 구현부 
double Circle::getArea() {
    return 3.14 * radius * radius;
}

Circle::Circle() : Circle(1) { }  // 위임 생성자 
// 밑에 int r 값에 1을 전달 

Circle::Circle(int r) {             // 타겟 생성자
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}


int main()
{
    Circle donut;       // 매개 변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);   // 매개 변수 있는 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    system("pause");
}

