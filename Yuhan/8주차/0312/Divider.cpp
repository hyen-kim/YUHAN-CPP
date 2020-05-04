#include "Divider.h"

Divider::Divider() {
	op1 = 0; op2 = 0;
}

Divider::Divider(double a, double b) {
	op1 = a; op2 = b;
}

void Divider::set(double a, double b) {
	op1 = a; op2 = b;
}

double Divider::process() {
	return op1 / op2;
}