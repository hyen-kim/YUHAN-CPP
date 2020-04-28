#include "Subtracter.h"

Subtracter::Subtracter() {
	op1 = 0; op2 = 0;
}

Subtracter::Subtracter(double a, double b) {
	op1 = a; op2 = b;
}

void Subtracter::set(double a, double b) {
	op1 = a; op2 = b;
}

double Subtracter::process() {
	return op1 - op2;
}