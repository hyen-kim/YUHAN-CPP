// 예제 7-1 프렌드 함수 만들기
#include <iostream>
using namespace std;

class Rect; // Rect라는 클래스를 미리 선언
bool equals(Rect r, Rect s);    // equals() 함수 선언
// equals라는 함수가 나중에 나오는데 Rect라는 클래스 두개를 받겠다 라는 의미

class Rect {    // Rect 클래스 선언
    int width, height;
public:
    Rect(int width, int height);
    friend bool equals(Rect r, Rect s); // equals()함수를 프렌드로 선언
    // equals를 friend로 열어줌으로 인해 private으로 된 멤버변수에 접근할 수 있음
};

Rect::Rect(int width, int height) {
    this->width = width;
    this->height = height;
}

bool equals(Rect r, Rect s) {   // 외부 함수
    if (r.width == s.width && r.height == s.height) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    Rect a(3, 4), b(4, 5);  // Rect 객체 두개 생성 (a, b)

    if (equals(a, b)) { 
        cout << "equal" << endl; 
    }
    else {
        cout << "not equal" << endl;
    }
}

