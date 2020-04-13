// 예제 3-1 Circle 클래스의 객체 생성 및 활용

#include <iostream> // 전처리기로써 프로그램을 확장해줌
// 라이브러리를 가져오거나 소스를 가져와서 사용할 수 있게 해주는 것
// 남의 클래스를 가져올 수 있나요 ? -> 가져올 수 있습니다.
// 그것이 상속인가요 ? (include)  -> 상속은 아닙니다.
// #include "rect.h"    <-- 이런식으로 확장이 가능

using namespace std;


// 클래스의 외부란 선언부와 구현부를 제외한 나머지 부분
// 예를 들어서 include로 rect클래스를 받았다면 이것도 클래스의 외부
// 하지만 상속을 받았다면 외부도 내부도 아닌 특수 관계 -> 상속관계

// Circle 선언부 
class Circle {  
public:
    int radius;         // 멤버변수
    double getArea();   // 멤버함수
};

// Circle 구현부 
double Circle::getArea() {
    return 3.14 * radius * radius;
}


int main()
{
    // 객체의 생성 : 클래스의 이름을 적고 마음대로 이름을 정하면 됨.
    // 그렇다면 이 객체는 어디에 만들어졌는가 ? 
    // 주 메모리에 만들어졌습니다.  ( 메인메모리 )
    Circle donut;   // 멤버변수와 멤버함수가 존재.
 
    donut.radius = 1;   // donut 객체의 반지름을 1로 설정
    // .연산자는 : 객체에 접근할 수 있게 해준다.
    // 캡슐화의 원칙이 깨지기 때문에 좋은 방식은 아니다.
    // set 함수가 안전하고 보안적이다.
 
    double area = donut.getArea();  // donut 객체의 면적을 알아냄
    // donut의 멤버 함수 호출

    cout << "donut 면적은 " << area << endl;

    Circle pizza;        // pizza 라는 객체 생성
    pizza.radius = 30;  // pizza 객체의 반지름을 30으로 설정
    area = pizza.getArea;    // pizza 객체의 면적을 알아냄
    cout << "pizza 면적은 " << area << endl;
}

