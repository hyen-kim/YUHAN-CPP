#include <iostream>
using namespace std;
#include "Subject.h"

Subject::Subject() {		
	next = NULL;
}

Subject::~Subject() {		// 가상 소멸자
	
}

void Subject::paint() {		// 출력
	subjectwname();			// 순수가상함수 호출
}

Subject* Subject::add(Subject* p) {
	this->next = p;
	return p;
}

Subject* Subject::getNext() {		// 다음 값을 가르키는 부분
	return next;
}