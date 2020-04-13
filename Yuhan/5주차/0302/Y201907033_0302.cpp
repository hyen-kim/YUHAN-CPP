// 예제 3-2(실습) - Rectangle 클래스 만들기
// 다음 main() 함수가 잘 작동하도록 너비(width)와 높이(height)를 가지고
// 면적 계산 기능을 가진 Rectangle 클래스를 작성하고 전체 프로그램을 완성하여라.

#include <iostream>
using namespace std;

// 클래스 선언부
class Rectangle{
public: // public을 써주지 않으면 main에서 접근하지 못함
    double width;  // 멤버변수 : 너비
    double height; // 멤버변수 : 높이
    double rectArea();  // 멤버함수 : 함수원형
};

// 클래스 구현부
double Rectangle::rectArea() {   // 멤버변수가 double형이므로
    // :: 은 범위 지정자
    return width * height;
}

int main()
{   
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;

    cout << "사각형의 면적은 " << rect.rectArea() << endl;

    system("pause");
}
