#ifndef ADDER_H
#define ADDER_H

class Adder {	// µ¡¼À ¸ðµâ Å¬·¡½º
	double op1, op2;
public:
	Adder();
	Adder(double a, double b);
	void set(double a, double b);
	double process();
};

#endif 
