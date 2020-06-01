// 예제 9-4 범위 지정 연산자(::)를 이용한 기본 클래스의 가상 함수 호출
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "--Shape--";
    }
};

class Circle :public Shape {
public:
    virtual void draw() {
        Shape::draw();  // 기본 클래스의 draw() 호출
        cout << "Circle" << endl;
    }
};

int main()
{
    Circle circle;  // 상위에 Shape라는 클래스가 포함되어있고 그 밑에 circle이라는 클래스가 있는 것임
    Shape* pShape = &circle;    // Shape에 circle의 주소를 넣고

    pShape->draw();             // draw를 호출하면 가상함수이기 때문에 Circle의 draw를 호출했더니 안에 Shape의 draw를 호출하므로 다시 Shape로 들어감
    pShape->Shape::draw();      // 정적바인딩 -> 바로 Shape 호출

    system("pause");
}
