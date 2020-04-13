// 예제 3-3 2개의 생성자를 가진 Circle 클래스

#include <iostream>
using namespace std;


// Circle 선언부
class Circle {
public:
    int radius;          // 멤버변수
    Circle();            // 매개 변수 없는 생성자
    Circle(int r);       //매개 변수 있는 생성자
    double getArea();   // 멤버함수
};


// Circle 구현부 
double Circle::getArea() {
    return 3.14 * radius * radius;
}
// Circle 생성자 
Circle::Circle() {  // Circle(); 자동호출
    radius = 1;     // int 형
    cout << "반지름 " << radius << "원 생성" << endl;
}
Circle::Circle(int r) { // Circle(30); 자동호출
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}


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
    // 생성자에서 자동 형변환이 가능하면 에러를 내지 않고 계산해주므로 
    // 10.5는 double, float형이지만, .5를 버리고 10으로 계산하여 값을 출력

    // 근데 문자열 10.5일 경우는 생성자에서 변환을 해주지 못하고 에러를 반환함
    // 매개변수가 일치하는, 자동변환을 해줄 수가 없는 경우 -> 에러 발생
    // 생성자는 자동 형변환 
    


    system("pause");
}

