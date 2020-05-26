#include "ColorPoint.h"
#include <iostream>
using namespace std;
#include <string>

void ColorPoint::setColor(string color) {
    this->color = color;
}

void ColorPoint::showColorPoint() {
    cout << color << ":";
    showPoint();
}