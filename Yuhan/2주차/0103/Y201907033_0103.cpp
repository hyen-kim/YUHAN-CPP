#include <iostream>
/*
    프로젝트명 : Y201907033_0103
*/

double area(int r); // 함수의 원형 선언

double area(int r) {    // 함수 구현
    return 3.14 * r * r;    // 반지름 r의 원면적 리턴
    // double 형이기 때문에 소수점을 포함한 실수형이 리턴
}

int main()
{
    // 자료형, 변수명, 초깃값
    int n = 3;      // 정수형
    char c = '#';   // 1Byte만 문자 입력가능 

    //                                              true -> 1
    std::cout << c << 5.5 << '-' << n << "hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';   // \n : 엔터키

    // 함수 area에 변수 n의 값을 넣고 그 값의 리턴 값을 출력한다는 의미 
    std::cout << "면적은 " << area(n); // 함수 area()의 리턴 값 출력
    system("pause");
}
