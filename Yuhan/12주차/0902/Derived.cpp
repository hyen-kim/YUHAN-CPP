#include <iostream>
using namespace std;
#include "Base.h"
#include "Derived.h"

void Derived::f() {
	cout << "Derived::f() called" << endl;
}
