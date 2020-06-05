#include <iostream>
using namespace std;
#include "Subject.h"

void Subject::subjectwname() {
	cout << "< SubjectName >" << endl;
}

Subject::Subject() {		// 생성자
	next = NULL;
}

Subject::~Subject() {		// 소멸자
}

void Subject::paint() {		// 출력
	subjectwname();
}

Subject* Subject::add(Subject* p) {
	this->next = p;
	return p;
}

Subject* Subject::getNext() {		// 다음 값을 가르키는 부분
	return next;
}