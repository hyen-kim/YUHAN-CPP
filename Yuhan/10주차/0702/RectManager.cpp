#include "RectManager.h"
#include "Rect.h"

bool RectManager::equals(Rect r, Rect s) {   // 외부 함수
    if (r.width == s.width && r.height == s.height) {
        return true;
    }
    else {
        return false;
    }
}