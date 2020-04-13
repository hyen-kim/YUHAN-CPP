#include <iostream> // 헤더파일 성격을 가지고 있음
// 함수의 원형 형태로 저장
// 전처리기로 소스를 확장하게 되면 상단에 헤더파일이 들어옴
// 실제로 코드가 존재하는 것이 아니라 표준라이브러리 안에 들어있음
// C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.25.28610\include 에 존재

/*#include <iostream>을 함으로 인해
cout, cin을 사용 가능 

#include <iostream> 를 열어보면 
#include <istream> 이 되어있고 열어보면
#include <ostream> 이 되어있고 열어보면
#include <ios> 가 되어있고 열어보면 
....
*/

#include<string>
using namespace std;
int main()
{
    string song("Falling in love with you"); // 문자열 song
    string elvis("Elvis Presley");          // 문자열 elvis
    string singer;                          // 문자열 변수 singer

    cout << song + "를 부른 가수는";  // + 로 문자열 연결
    cout << "(힌트 : 첫글자는 " << elvis[0] << ") ? ";    // [] 연산자 사용

    getline(cin, singer); // #include<string>을 정의해야 사용가능
    if (singer == elvis) {
        cout << "맞았습니다.";
    }
    else {
        cout << "틀렸습니다." + elvis + "입니다." << endl; // +로 문자열 연결
    }

    system("pause");
}
