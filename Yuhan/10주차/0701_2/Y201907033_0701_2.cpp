#include <iostream>
#include "Rect.h"
using namespace std;

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

