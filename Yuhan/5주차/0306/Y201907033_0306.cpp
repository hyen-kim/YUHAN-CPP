// 예제 3-6(실습) - Rectangle 클래스 만들기
// 다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그램을 완성하라.
// Rectangle 클래스는 width와 height의 두 멤버 변수와 3개의 생성자, 그리고 isSquare() 함수를 가진다.

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;  // 멤버 변수

public:
    // 생성자
    Rectangle();
    Rectangle(int w);
    Rectangle(int w, int h);

    // 일반 멤버 함수
    bool isSquare();
};

Rectangle::Rectangle() : Rectangle(1,1) {}
Rectangle::Rectangle(int w) {
    width = w;
    height = w;
}
Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

bool Rectangle::isSquare() {
    if (width == height) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
    
    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl; 
    if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;

    system("pause");
}

