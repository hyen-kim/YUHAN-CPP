// 예제 7-12 a + b를 위한 연산자 함수를 프렌드로 작성
#include <iostream>
#include "Power.h"


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