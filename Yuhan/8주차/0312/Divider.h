#ifndef DIVIDER_H
#define DIVIDER_H

class Divider {	// ³ª´°¼À ¸ðµâ Å¬·¡½º
	double op1, op2;
public:
	Divider();
	Divider(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 
