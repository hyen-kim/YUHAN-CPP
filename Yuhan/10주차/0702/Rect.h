#ifndef RECT_H
#define RECT_H
#include "RectManager.h"

class Rect {    // Rect 클래스 선언
    int width, height;
public:
    Rect(int width, int height);
    friend bool RectManager::equals(Rect r, Rect s);
};

#endif // !1
