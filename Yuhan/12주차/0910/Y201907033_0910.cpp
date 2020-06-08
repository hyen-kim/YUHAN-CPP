#include <iostream>
using namespace std;
#include "Subject.h"
#include "Java.h"
#include "Cpp.h"
#include "Linux.h"


// Main Memory  ---> pStart     p       q       pLast
// Heap Memory  --->   

int main()
{
    Subject* pStart = NULL;
    Subject* pLast;

    pStart = new Java();  
    pLast = pStart;

    cout << "-- 수강 신청합니다. --" << endl;
    pLast = pLast->add(new Cpp());  // Cpp 객체 생성
    pLast = pLast->add(new Java()); // Java 객체 생성
    pLast = pLast->add(new Linux()); // Linux 객체 생성
    pLast = pLast->add(new Cpp()); // Cpp 객체 생성

    // 현재 연결된 과목들을 화면에 그린다
    Subject* p = pStart;
    while (p != NULL) {
        p->paint();
        p = p->getNext();   // getNext -> 즉 다음 값을 가르킴
    }

    // 현재 연결된 모든 과목들을 삭제한다.
    p = pStart;
    Subject* q;
    while (p != NULL) { // NULL이 아니니까 실행하러 감
        q = p->getNext();   // 다음 도형 주소
        // delete를 해야하므로 delete하기 전에 다음 주소 값을 저장한다는 개념
        delete p;   // 기본 클래스의 가상 소멸자 호출
        p = q;      
    }

    system("pause");
    // 모든 메모리가 반환되면서 프로그램이 종료되게 된다.

}
