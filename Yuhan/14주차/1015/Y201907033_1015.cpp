// 매개변수 x, y의 합을 출력하는 람다식 

#include <iostream>
using namespace std;

int sum1(int a, int b) {
    return a + b;
}

int main()
{
    cout << "일반 함수 : 합은 " << sum1(10, 20) << endl;
    cout << "일반 함수를 람다로 표현 : 합은 " << [](int a, int b) {return a + b; }(20, 30) << endl;

    [](int x, int y) { cout << "람다식을 바로 출력 : 합은 " << x + y << endl; } (30, 40);

    auto sum = [](int x, int y) { return x + y; };
    // 람다식은 auto만 사용할 수 있음
    cout << "람다식을 변수로 선언 : 합은 " << sum(40, 50) << endl;
    cout << "람다식을 변수로 선언 : 합은 " << sum(50, 60) << endl;

    auto sum2 = [](int x, int y) {cout << "람다식을 바로 출력 : 합은 " << x + y << endl; };
    sum2(70, 80);
    sum2(80, 90);

    system("pause");

}

