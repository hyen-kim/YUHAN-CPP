#include <iostream>     // 전처리기 : 헤더파일을 컴파일전에 소스를 확장해주는 역할을 함
                    
/*
    프로젝트명 : Y201907033_0102
    cout과 << 연산자를 이용하여 화면에 출력한다.
*/

// C++ 프로그램은 main() 함수에서부터 실행을 시작한다.
int main()  // 리턴타입이 int
{   
    std::cout << "Yuhan University student 2 nd grade\n";  // 화면에 Hello를 출력하고 다음 줄로 넘어감
    std::cout << "201907033\n";
    std::cout << "2주차_C++\n";
    system("pause");    // 실행 후 콘솔창이 유지되도록 해줌

    return 0;           // main() 함수가 종료하면 프로그램이 종료됨
    // main이 int타입이므로 reutrn 0; 을 적어줌으로 인해 0값을 리턴하도록 해줌 => 받아서 쓰진 X
}
