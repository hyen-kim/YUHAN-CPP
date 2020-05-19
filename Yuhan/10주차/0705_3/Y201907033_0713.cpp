// 예제 7-13 ++연산자를 프렌드로 작성한 예
#include <iostream>
#include "Power.h"
using namespace std;

Power& operator++(Power& op) {  // 전위 ++ 연산자 함수 구현
    op.kick++;
    op.punch++;
    return op;  // 연산 결과 리턴
}

Power operator++(Power& op, int x) {  // 후위 ++ 연산자 함수 구현
    Power tmp = op; // 변경하기 전의 op 상태 저장
    op.kick++;
    op.punch++;
    return tmp;  // 변경 이전의 op 리턴
}

int main()
{
    cout << "================ 전위연산자 ============\n";
    Power a(3, 5), b;
    b = ++a;    // 전위 ++ 연산자
    a.show();   
    b.show();
    // b = ++a 실행 후 a, b 출력
    cout << "=========================================\n";


    cout << "================ 후위연산자 ============\n";
    b = a++;    // 후위 ++ 연산자
    a.show();   
    b.show();
    // b = a++ 실행 후 a, b 출력 
    cout << "=========================================\n";
}

