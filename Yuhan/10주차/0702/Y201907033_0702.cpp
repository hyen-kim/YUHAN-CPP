// 예제 7-2 다른 클래스의 멤버 함수를 프렌드로 선언
#include <iostream>
#include "Rect.h"
#include "RectManager.h"

using namespace std;

int main()
{
    Rect a(3, 4), b(3, 4);  // Rect 객체 두개 생성 (a, b)
    RectManager man;

    if (man.equals(a, b)) {
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }
    system("pause");
}
