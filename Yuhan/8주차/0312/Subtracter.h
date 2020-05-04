#ifndef SUBTRACTER_H
#define SUBTRACTER_H

class Subtracter {	// °ö¼À ¸ðµâ Å¬·¡½º
	double op1, op2;
public:
	Subtracter();
	Subtracter(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 