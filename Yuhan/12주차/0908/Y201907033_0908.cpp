#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"


// Main Memory  ---> pStart     p       q       pLast
// Heap Memory  --->   

int main()
{
    Shape* pStart = NULL;
    Shape* pLast;

    pStart = new Circle();  // 처음에 원 도형을 생성한다.
    pLast = pStart;

    pLast = pLast->add(new Rect()); // 사각형 객체 생성
    pLast = pLast->add(new Circle()); // 원 객체 생성
    pLast = pLast->add(new Line()); // 선 객체 생성
    pLast = pLast->add(new Rect()); // 사각형 객체 생성

    // 현재 연결된 모든 도형을 화면에 그린다.
    Shape* p = pStart;
    while (p != NULL) {
        p->paint();
        p = p->getNext();   // getNext -> 즉 다음 값을 가르킴
        // Shape 의 구조는 다 같다고 보면 됨
    }

    // 현재 연결된 모든 도형을 삭제한다.
    p = pStart;
    Shape* q;
    while (p != NULL) { // NULL이 아니니까 실행하러 감
        q = p->getNext();   // 다음 도형 주소
        // delete를 해야하므로 delete하기 전에 다음 주소 값을 저장한다는 개념
        delete p;   // 기본 클래스의 가상 소멸자 호출
        p = q;      // 다음 도형 주소를 p에 저장
    }
    
    system("pause");

    // 모든 메모리가 반환되면서 프로그램이 종료되게 된다.
    
}
