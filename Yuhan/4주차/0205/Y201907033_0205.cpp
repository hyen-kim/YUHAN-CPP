#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[11], password[11];
    cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
    while (true) {
        cout << "이름과 암호 >> ";
        cin >> name >> password;    // 스페이스(공백문자)로 구분하여 입력
        if (strcmp(password, "C++") == 0) {    // 암호가 C++ 이면 0값으 리턴
            cout << name << "님 안녕하세요. \n암호를 맞추셨네요. \n프로그램을 정상 종료합니다." << endl;
            break;  // while문을 종료.
        }
        else {  // 반드시 {}를 작성하는 것이 좋음.
            cout << "암호가 틀립니다." << endl;
        }
    }
    system("pause");
}
