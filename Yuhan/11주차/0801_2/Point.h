#ifndef POINT_H
#define POINT_H
using namespace std;

class Point {
    // 멤버변수가 private로 존재
    int x, y;
public:
    void set(int x, int y);
    void showPoint();
};


#endif // !POINT_H
