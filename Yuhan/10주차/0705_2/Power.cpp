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
