// 이항 연산자 중복 : + 연산자
#include <iostream>
#include "Power.h"

int main()
{
	Power a(3, 5), b(4, 6), c, d;
	c = a + b;	// 파워 객체 + 연산
	a.show();	// 3, 5
	b.show();	// 4, 6
	c.show();
	d = a - b;
	d.show();
}