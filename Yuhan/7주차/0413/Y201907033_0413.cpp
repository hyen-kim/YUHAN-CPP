// 전광판에 글자 흘러가는 것 처럼
#include <Windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cout << "문자열을 입력하세요" << endl;
    getline(cin, s, '\n');  // 문자열 입력
    system("cls");      // 콘솔창 지우기
    int len = s.length(); // 문자열의 길이

    for (int i = 0; i < 100; i++)
    {
        string first = s.substr(0, 2);      // 맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(2, len - 2);  // 나머지 문자들을 문자열로 분리

        s = sub + first;   // 두 문자열을 연결하여 새로운 문자열로 만듬

        cout << s << endl;
        Sleep(300); 
        system("cls");  // 콘솔창 지우기
    }
    system("pause");

}

