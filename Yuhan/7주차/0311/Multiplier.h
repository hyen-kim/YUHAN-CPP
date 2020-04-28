#ifndef MULTIPLIER_H
#define MULTIPLIER_H

class Multiplier {	// °ö¼À ¸ðµâ Å¬·¡½º
	double op1, op2;
public:
	Multiplier();
	Multiplier(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 
