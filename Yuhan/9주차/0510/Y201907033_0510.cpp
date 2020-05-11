// 예제 5-10 얉은 복사 생성자를 사용하여 프로그램이 비정상 종료되는 경우
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Person {	// Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name);	// 생성자
	~Person();	// 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {	// 생성자
	this->id = id;
	int len = strlen(name);	// name의 문자 개수
	this->name = new char[len + 1];	// name 문자열 공간 할당
	strcpy(this->name, name);	// name에 문자열 복사
}
// 위에 생성자는 있지만 복사 생성자는 없는 것이 눈에 보임

Person::~Person() {	//소멸자
if (name)	// 만일 name에 동적 할당된 배열이 있으면 
	delete[] name;	// 동적 할당 메모리 소멸	-> name 메모리 반환
}

void Person::changeName(const char* name) {	// 이름 변경
	if (strlen(name) > strlen(this -> name))
	{
		return;
	}
	strcpy(this->name, name);
}
int main()
{
	Person father(1, "kitae");	// (1) father 객체 생성
	Person daughter(father);	// (2) daughter 객체 복사 생성, 복사생성자 호출

	cout << "daugther 객체 생성 직후 --- " << endl;
	father.show();				// (3) father 객체 출력
	daughter.show();			// (3) daughter 객체 출력
	// 이름을 이런식으로 바꿨을 경우 name 공간 공유가 일어난다는 점 알고 있어야함.


	daughter.changeName("Grace");// (4) daughter의 이름을 "Grace"로 변경
	cout << "daughter 이름을 Grace로 변경한 후 --- " << endl;
	father.show();				 // (5) father 객체 출력
	daughter.show();			 // (5) daughter 객체 출력

	return 0;					// (6), (7) daughter, father 객체 소멸 
	// return 에 중단점을 걸고 f11을 눌르면 소멸자로 이동
	// 프로그램이 종료되면서 소멸자를 실행하려고 갔는데 
	// father과 daughter는 똑같은 메모리 공간을 가리키므로 
	// daughter는 정상적으로 소멸하였지만
	// 그다음에 father 부분을 소멸하려고 가면
	// 이미 소멸되여 소멸할 공간이 없으므로 에러가 발생하는 것임


	system("pause");
}

