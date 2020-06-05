#ifndef SUBJECT_H
#define SUBJECT_H

class Subject {
private:
	Subject* next;
protected:
	virtual void subjectwname() = 0;		// 과목명 : 순수가상함수
public:
	Subject();
	virtual ~Subject();
	void paint();
	Subject* add(Subject* p);
	Subject* getNext();
};

#endif // !SUBJECT_H
