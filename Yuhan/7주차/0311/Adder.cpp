#include "Adder.h"

Adder::Adder() {
	op1 = 0; op2 = 0;
}

Adder::Adder(double a, double b) {
	op1 = a; op2 = b;
}

void Adder::set(double a, double b) {
	op1 = a; op2 = b;
}

double Adder::process() {
	return op1 + op2;
}