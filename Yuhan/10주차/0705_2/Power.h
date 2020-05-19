#ifndef POWER_H
#define POWER_H

class Power {	// 에너지를 표현하는 파워 클래스
	int kick;	// 발로 차는힘
	int punch;	// 주먹으로 치는 힘
public:
	Power(int kick = 0, int punch = 0);
	void show();
	friend Power operator+ (Power op1, Power op2);	// 프렌드 선언
};

#endif // !POWER_H