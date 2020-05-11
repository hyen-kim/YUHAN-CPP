// 예제 5-11 깊은 복사 생성자를 사용하여 프로그램이 정상 종료되는 경우

// #define _CRT_SECURE_NO_WARNINGS	// 경고 메세지를 뜨지마라
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class Person {	// Person 클래스 선언
	int id;
	int* age;
	char* name;		// 포인터 변수로 선언 -> 힙 메모리 공간에서 사용
	string* addr;	// 포인터 변수로 선언 -> 힙 메모리 공간에서 사용
	// 모든 자료형은 포인터로 선언이 가능하다.

public:
	Person(int id, int age, const char* name, string addr);	// 생성자
	Person(const Person& person);		// 복사 생성자
	~Person();	// 소멸자
	void changeId(int id);
	void changeAge(int age);
	void changeName(const char* name);
	void changeAddr(string addr);
	void show() { cout << id << ':' << *age << ',' << name << "," << *addr << endl; }
};

Person::Person(int id, int age,  const char* name, string addr) {	// 생성자
	this->id = id;	

	this->age = new int;	// 주소 값을 age에 넣음 -> int공간을 힙메모리 공간에 생성
	*this->age = age;		// int공간을 위에 매개변수 age를 실제공간에 넣음

	int len = strlen(name);	// name의 문자 개수
	this->name = new char[len + 1];	// name 문자열 공간 할당
	strcpy_s(this->name ,len+1, name);	// name에 문자열 복사
	// c++이 업그레이드 되면서 strcpy를 못쓰게 함

	this->addr = new string;	// string을 힙메모리 공간에 생성후 addr에 넣음
	*this->addr = addr;			// 실제 주소값을 전달
}

Person::Person(const Person& person) {	// 복사 생성자
	this-> id = person.id;	// id값 복사

	this->age = new int;	// 포인터니까 별도의 int공간을 생성
	*this->age = *person.age;// person의 age의 실제 값을 실제 age가 가르키는 공간에 넣어야함

	int len = strlen(person.name);	//name의 문자 개수
	this->name = new char[len + 1];	// name을 위한 공간 할당
	strcpy_s(this->name, len + 1, person.name);	// name의 문자열 복사

	this->addr = new string;	
	*this->addr = *person.addr;
	// this->addr = person.addr;

	cout << "복사 생성자 실행, 원복 객체의 이름 " << this->name << endl;
}

Person::~Person() {	//소멸자
	if (name)	{// 만일 name에 동적 할당된 배열이 있으면 
		delete[] name;	// 동적 할당 메모리 소멸	-> name 메모리 반환
	}
	if (age) {// 만일 age에 동적 할당된 배열이 있으면 
		delete[] age;	// 동적 할당 메모리 소멸	-> age 메모리 반환
	}
	if (addr) {// 만일 addr에 동적 할당된 배열이 있으면 
		delete[] addr;	// 동적 할당 메모리 소멸	-> addr 메모리 반환
	}
}
void Person::changeId(int id) {	// 아이디 변경
	this->id = id;
}

void Person::changeAge(int age) {	// 나이 변경
	*this->age = age;	// 실제 값을 변경해야하므로 
						// 아스타(*)를 붙여야한다
						// 실제 힙메모리 공간
}

void Person::changeName(const char* name) {	// 이름 변경
	if (strlen(name) > strlen(this->name))
	{
		return;
	}
	strcpy_s(this->name,strlen(name)+1, name);
}

void Person::changeAddr(string addr) {	// 주소 변경
	*this->addr = addr;
}

int main()
{
	//			  id, age, name,	addr
	Person father(1, 50, "kitae", "Seoul");	// (1) father 객체 생성
	Person daughter(father);				// (2) daughter 객체 복사 생성, 복사생성자 호출

	cout << "daugther 객체 생성 직후 --- " << endl;
	father.show();				// (3) father 객체 출력
	daughter.show();			// (3) daughter 객체 출력
	// 두개는 별도의 공간을 가지고 있음 -> 깊은 복사 이므로

	daughter.changeId(2);		// (4) daughter의 아이디를 2로 변경
	daughter.changeAge(15);		// (4) daughter의 나이를 15로 변경
	daughter.changeName("Grace");// (4) daughter의 이름을 "Grace"로 변경
	daughter.changeAddr("Bucheon");// (4) daughter의 주소를 "Bucheon"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 --- " << endl;

	father.show();				 // (5) father 객체 출력
	daughter.show();			 // (5) daughter 객체 출력

	return 0;					// (6), (7) daughter, father 객체 소멸 

	system("pause");
}

