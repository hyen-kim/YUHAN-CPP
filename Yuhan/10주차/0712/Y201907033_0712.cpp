// 예제 7-12 a + b를 위한 연산자 함수를 프렌드로 작성
#include <iostream>
using namespace std;

class Power {	// 에너지를 표현하는 파워 클래스
	int kick;	// 발로 차는힘
	int punch;	// 주먹으로 치는 힘
public:
	Power(int kick = 0, int punch = 0);
	void show();
	friend Power operator+ (Power op1, Power op2);	// 프렌드 선언
};
Power::Power(int kick, int punch) {	// 여기서는 매개변수 디폴트값을 줬더라도 표시하면 안됨
	this->kick = kick;
	this->punch = punch;
}

void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}

// 외부 함수
Power operator+ (Power op1, Power op2) {	// + 연산자 함수 구현
	Power tmp;	// 임시 객체 생성
	tmp.kick = op1.kick + op2.kick;	// kick 더하기
	tmp.punch = op1.punch + op2.punch;	// punch 더하기
	return tmp;	// 임시 객체 리턴
}	// 리턴 타입은 Power 


int main()
{
	Power a(3, 5), b(4, 6), c;
	c = a + b;	// 파워 객체 + 연산
	a.show();	// 3, 5
	b.show();	// 4, 6
	c.show();
}
