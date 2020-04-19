#include <iostream>
#include "Circle.h"

using namespace std;


int main()
{
    Circle donut;       // 매개 변수 없는 생성자 호출
    double area = donut.getArea();
    cout << "donut 면적은 " << area << endl;

    Circle pizza(30);   // 매개 변수 있는 생성자 호출
    area = pizza.getArea();
    cout << "pizza 면적은 " << area << endl;

    Circle plate(10.5); // 매개 변수 없는 생성자 호출
    area = plate.getArea();
    cout << "plate 면적은 " << area << endl;

    system("pause");
}

