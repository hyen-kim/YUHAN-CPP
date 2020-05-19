#include "Power.h"
#include <iostream>
using namespace std;

Power::Power(int kick, int punch) {	// 여기서는 매개변수 디폴트값을 줬더라도 표시하면 안됨
	this->kick = kick;
	this->punch = punch;
}

void Power::show() {
	cout << "kick= " << kick << ',' << "punch= " << punch << endl;
}

Power Power::operator+ (Power& op2) {	// + 연산자 함수 코드
	Power tmp;
	tmp.kick = this->kick + op2.kick;
	tmp.punch = this->punch + op2.punch;
	return tmp;
}

Power Power::operator- (Power& op2) {	// + 연산자 함수 코드
	Power tmp;
	tmp.kick = this->kick - op2.kick;
	tmp.punch = this->punch - op2.punch;
	return tmp;
}
