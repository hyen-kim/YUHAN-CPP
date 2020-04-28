#include <iostream>
using namespace std;

// circle 객체 생성
class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main()
{
	int radius;
	Circle* p;	// 동적 객체 생성

	while (true)
	{
		cout << "정수 반지름 입력 (음수이면 종류) >> ";
		cin >> radius;
		
		if (radius < 0) break;	// 음수가 입력되어 종료
		p = new Circle(radius);
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;	// 객체 반환
	}
	system("pause");	// 실행 후 콘솔창 유지
}
