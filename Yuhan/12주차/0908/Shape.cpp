#include <iostream>
using namespace std;
#include "Shape.h"

void Shape::draw() {
	cout << "--Shape--" << endl;
}

Shape::Shape() {
	next = NULL;
}

Shape::~Shape() {
}

void Shape::paint() {
	draw();
}

Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}

Shape* Shape::getNext() {
	return next;
}