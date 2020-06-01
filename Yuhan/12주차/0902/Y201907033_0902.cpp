// 예제 9-2 파생클래스에서 함수를 재정의하는 예제

#include <iostream>
using namespace std;
#include "Base.h"
#include "Derived.h"


void main()
{
    Derived d, * pDer;  // Derived클래스를 이용하여 객체 생성
    pDer = &d;
    pDer->f();  // Derived::f()호출 --> 전체객체에서 가장 마지막인 자식객체 호출

    Base* pBase;    // pBase는 Base클래스의 포인터로 선언이 되어있기 때문에
    pBase = pDer;   // 업캐스팅
    pBase->f();     // Base::f() 호출 

    system("pause");
}