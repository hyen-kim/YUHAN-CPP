#include <iostream>
#include "Circle.h"
using namespace std;

// 외부 함수
void increase(Circle *c) {
    int r = c->getRadius();
    c->setRadius(r + 1);
}


int main()
{
    Circle waffe(30);
    increase(&waffe);
    cout << waffe.getRadius() << endl;
    system("pause");
}