
#include <iostream>
#include "Power.h"
using namespace std;

int main()
{
	Power a(3, 5), b(4, 6), c, d;
	c = a + b;	// 파워 객체 + 연산
	a.show();	// 3, 5
	b.show();	// 4, 6
	c.show();
	d = a - b;
	d.show();

	if (a == b) {
		cout << "두 파워가 같다." << endl;
	}
	else {
		cout << "두 파워가 같지 않다." << endl;
	}
}