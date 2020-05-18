// 예제 7-3 다른 클래스 전체를 프렌드로 선언
#include <iostream>
using namespace std;

class Rect;

class RectManager { // RectManager 클래스 선언
public:
    bool equals(Rect& r, Rect& s);
    void copy(Rect& dest, Rect& src);   // 참조에 의한 호출
};

class Rect {    // Rect 클래스 선언
    int width, height;
public:
    Rect(int width, int height);
    friend RectManager; // 모든 클래스 open
};

Rect::Rect(int width, int height) {
    this->width = width;
    this->height = height;
}

bool RectManager::equals(Rect& r, Rect& s) {   // r과 s가 같으면 true 리턴
    if (r.width == s.width && r.height == s.height) {
        return true;
    }
    else {
        return false;
    }
}

void RectManager::copy(Rect& dest, Rect& src){  // src를 dest에 복사
    dest.width = src.width;
    dest.height = src.height;
}

int main()
{
    Rect a(3, 4), b(5, 6);  // Rect 객체 두개 생성 (a, b)
    RectManager man;
    
    man.copy(b, a); // a를 b에 복사한다.
    // 객체 b의 width, height 값이 a와 같아진다.

    if (man.equals(a, b)) {
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }
    system("pause");
}
