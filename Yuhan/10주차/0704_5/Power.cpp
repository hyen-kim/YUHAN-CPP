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

bool Power::operator== (Power& op2) {	// == 연산자 함수 코드
	if (this->kick == op2.kick && this->punch == op2.punch) {
		return true;
	}
	else {
		return false;
	}
}

Power& Power::operator+= (Power& op2) {	// += 연산자 함수 코드
	// 자기 자신을 리턴할거기 때문에 tmp가 필요 없음
	kick = kick += op2.kick;
	punch = punch += op2.punch;
	return *this;
}