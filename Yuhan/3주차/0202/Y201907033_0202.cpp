
#include <iostream>

double area(int r); // 함수의 원형 선언

double area(int r) {    // 함수 구현 
    return 3.14 * r * r;    // 반지름 r
}


int main()
{
    int n = 3;
    char c = '#';   // 문자를 입력하므로 '' 
    std::cout << c << 5.5 << '-' << n << "Hello" << true << std::endl;
    std::cout << "n + 5 = " << n + 5 << '\n';
    std::cout << "면적은 " << area(n) << '\n' ; // 함수 area()의 리턴 값 출력
    system("pause");

}
