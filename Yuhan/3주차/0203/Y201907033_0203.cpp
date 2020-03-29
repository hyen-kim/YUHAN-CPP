// 0203번 과제 : 너비와 높이를 계산하는 부분은 함수로 작성
// 함수란 ? : 0202 에서 봤던 내용 참고
// 넓이와 높이가 둘다 실수로 받아야함

#include <iostream>
using namespace std;    // std::를 생략하기 위해 선언

double area(double width, double height);   // 함수 원형 선언
double area(double width, double height) {  // 사각형의 넓이 출력
    return width * height;  // 사각형의 넓이를 계산한 값을 리턴
}

int main()
{
    // 로컬변수는 맨 위에 선언하는 것이 좋음.
    double width, height;   // 실수형으로 받기 위해 자료형을 double로 선언
   
    cout << "너비를 입력하세요 >> ";
    cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장
                  // 입력이기때문에 부등호 방향이 반대
    // width 변수 값에 문자가 들어가게 되면 비정상적으로 프로그램이 종료가 됨
    // 예외적인 부분은 나중에 처리함.
    cout << "높이를 입력하세요 >> ";
    cin >> height;  // 키보드로부터 너비를 읽어 width 변수에 저장

    cout << "면적은 " << area(width, height) << '\n'; //면적을 출력하고 다음 줄로 넘어감
    
    system("pause");    // 콘솔 창 유지
    // [F9] => 중단점을 이용하면 유용
}
