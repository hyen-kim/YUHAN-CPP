#include "Multiplier.h"

Multiplier::Multiplier() {
	op1 = 0; op2 = 0;
}

Multiplier::Multiplier(double a, double b) {
	op1 = a; op2 = b;
}

void Multiplier::set(double a, double b) {
	op1 = a; op2 = b;
}

double Multiplier::process() {
	return op1 * op2;
}