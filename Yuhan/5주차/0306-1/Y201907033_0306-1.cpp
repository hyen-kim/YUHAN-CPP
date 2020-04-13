// 예제 3-6(실습) - Rectangle 클래스 만들기
// 다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그램을 완성하라.
// Rectangle 클래스는 width와 height의 두 멤버 변수와 3개의 생성자, 그리고 isSquare() 함수를 가진다.

#include <iostream>
#include <string>
using namespace std;

// 클래스의 선언부
class Rectangle {
public: 
    // 멤버 변수
    int width, height;  

    // 생성자
    Rectangle();
    Rectangle(int w);
    Rectangle(int w, int h);

    // 일반 멤버 함수
    bool isSquare();
};

// 클래스의 생성부
Rectangle::Rectangle() : Rectangle(1, 1) {}
Rectangle::Rectangle(int w) {
    width = height = w;
}
Rectangle::Rectangle(int w, int h) {
    width = w;  height = h;
}

// 일반 멤버 함수
bool Rectangle::isSquare() {
    if (width == height) {
        return true;
    }
    else {
        return false;
    }
    /*
    삼항연산자 사용했을 경우
    bool bSquare;
    bSquare = (width == height) ? true : false;
    return bSquare;
    */
}

// 외부 함수
string rectStr(Rectangle rect) {    // 매개 인자는 객체를 받음
    string strRect;

    strRect = "<W : " + to_string(rect.width) + ", H : " + to_string(rect.height) + "> 이므로";
    // to_string을 사용하기 위해서는 위해서 string을 include 해줘야한다.
    return strRect;
}

int main()
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    cout << "rect1은 " << rectStr(rect1) << "정사각형이" << (rect1.isSquare() ? "다.\n" : "아니다.\n");
    cout << "rect2은 " << rectStr(rect2) << "정사각형이" << (rect2.isSquare() ? "다.\n" : "아니다.\n");
    cout << "rect3은 " << rectStr(rect3) << "정사각형이" << (rect3.isSquare() ? "다.\n" : "아니다.\n");
   
    system("pause");
}

