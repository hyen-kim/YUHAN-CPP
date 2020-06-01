// 예제 9-1 파생클래스에서 함수를 재정의하는 예제
#include <iostream>
using namespace std;

class Base_1 {
public:
    void f() {
        cout << "Base_1::f() called" << endl;
    }
};

class Base_2 : public Base_1 {
public:
    void f() {
        cout << "Base_2::f() called" << endl;
    }
};

class Base_3 : public Base_2 {
public:
    void f() {
        cout << "Base_3::f() called" << endl;
    }
};

class Derived_1 : public Base_3 {   // Base 클래스를 Derived가 상속 받음
public:
    void f() {
        cout << "Derived_1::f() called" << endl;
    }
};

class Derived_2 : public Derived_1 {   // Base 클래스를 Derived가 상속 받음
public:
    void f() {
        cout << "Derived_2::f() called" << endl;
    }
};
void main()
{
    Derived_1* pDer1;
    Derived_2 d, *pDer;  // Derived클래스를 이용하여 객체 생성
    pDer = &d;
    pDer->f();  // Derived::f()호출 --> 전체객체에서 가장 마지막인 자식객체 호출

    Base_3 *pBase;    // pBase는 Base클래스의 포인터로 선언이 되어있기 때문에
    pBase = pDer;   // 업캐스팅
    pBase->f();     // Base::f() 호출 

    // 같은 객체를 pDer이랑 pBase로 접근했을 때
    // pDer은 Base멤버 Derived 멤버 둘다 접그닝 가능하지만
    // pBase는 Base의  멤버만 접근할 수 있다라는 차이점이 존재

    // 어떠한 객체를 포인터가 가르키고 있을 때 
    // 포인터가 가르키는 곳에 포인터를 호출하게 되면 
    // 함수의 재정의에 의해서
    // 여러개의 함수가 설정이 되어 있을 때
    // 가장 마지막의 함수가 호출이 된다라고 생각하면 된다.



    pDer1 = (Derived_1*)pBase;  // 다운캐스팅
    pDer1->f(); // Base()::f() 호출
    system("pause");
}