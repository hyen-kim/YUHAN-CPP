// 이항 연산자 중복 : + 연산자
#include <iostream>
using namespace std;

class Power {	// 에너지를 표현하는 파워 클래스
	int kick;	// 발로 차는힘
	int punch;	// 주먹으로 치는 힘
public:
	Power(int kick = 0, int punch = 0);
	void show();
	Power operator+ (Power op2);
};
Power::Power(int kick, int punch) {	// 여기서는 매개변수 디폴트값을 줬더라도 표시하면 안됨
	this->kick = kick;
	this->punch = punch;
}

void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}

Power Power::operator+ (Power op2) {	// + 연산자 함수 코드
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}


int main()
{
	Power a(3, 5), b(4, 6), c;
	c = a + b;	// 파워 객체 + 연산
	a.show();	// 3, 5
	b.show();	// 4, 6
	c.show();
}