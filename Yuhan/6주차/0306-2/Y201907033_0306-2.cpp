
#include <iostream>
#include <string>
using namespace std;

// 클래스의 선언부
class Rectangle {
	// 멤버 변수 : private
	int width, height;
	string name;

public:
	// 생성자
	Rectangle(string nm);
	Rectangle(string nm, int w);
	Rectangle(string nm, int w, int h);

	// 소멸자
	~Rectangle();

	// 일반 멤버 함수
	bool isSquare();
	string rectStr();
};

// 클래스의 생성부
Rectangle::Rectangle(string nm) {
	name = nm;
	width = height = 1;
}
Rectangle::Rectangle(string nm, int w) {
	name = nm;
	width = height = w;
}
Rectangle::Rectangle(string nm, int w, int h) {
	name = nm;
	width = w;  height = h;
}
Rectangle::~Rectangle() {
	 cout << name << "소멸자 실행\n";
}

// 일반 멤버 함수
bool Rectangle::isSquare() {
	if (width == height) {
		return true;
	}
	else {
		return false;
	}
	/*
	삼항연산자 사용했을 경우
	bool bSquare;
	bSquare = (width == height) ? true : false;
	return bSquare;
	*/
}

string Rectangle::rectStr() {    // 매개 인자는 객체를 받음
	string strRect;

	strRect = name + "은 <W : " + to_string(width) + ", H : " + to_string(height) + "> 이므로 정사각형이 ";
	// to_string을 사용하기 위해서는 위해서 string을 include 해줘야한다.
	return strRect;
}

int main()
{
	Rectangle rect1("rect1");
	Rectangle rect2("rect2", 3, 5);
	Rectangle rect3("rect3", 3);

	cout << rect1.rectStr() << (rect1.isSquare() ? "맞다.\n" : "아니다.\n");
	cout << rect2.rectStr() << (rect2.isSquare() ? "맞다.\n" : "아니다.\n");
	cout << rect3.rectStr() << (rect3.isSquare() ? "맞다.\n" : "아니다.\n");

	system("pause");
}

