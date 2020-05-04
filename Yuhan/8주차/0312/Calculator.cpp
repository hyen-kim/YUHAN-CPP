// 헤더파일 ( 계산기, +, /, *, - )
#include "Calculator.h"
#include "Adder.h"
#include "Divider.h"
#include "Multiplier.h"
#include "Subtracter.h"

void Calculator::run() {
	string str1, str2, proc;
	// str1 : 수 전체를 입력받는 변수
	// str2 : 수를 하나하나 넣고 비교하는 변수
	// proc : 연산기호를 담는 변수

	str1 = str2 = proc = "";
	int i = 0;
	// i : 반복문을 종료할 변수
	double r_val;

	// 클래스에 기본 생성자가 0으로 초기화를 해주기 때문에 주지 않아도 되지만 줌
	Adder adder(0, 0);
	Divider divider(0, 0);
	Multiplier multiplier(0, 0);
	Subtracter subtracter(0, 0);

	while (i != -999)
	{
		i = r_val = 0;

		cout << "==========================================================\n";
		cout << "수식을 입력하세요. (ex : 10 + 3, z : 중지) >> ";
		getline(cin, str1);	// 값을 입력받아서 str1에 넣음

		istringstream s_buf(str1);	// 필요한 값을 추출

		while (s_buf >> str2)		//s_buf의 값을 str2에 하나씩 넣음
		{
			i++;	// 밑 조건문인 i = 1을 계산해야하므로 i가 1증가

			if (str2 == "z" || str2 == "Z")	// z나 Z을 입력했을 시 프로그램 종료
			{
				cout << "계산을 종료합니다." << "\n\n";
				i = -999;	// 위의  while문에 i가 -999가 되면 종료되기 때문에 i를 -999로 바꿈
				break;
			}

			if ((i % 2) == 0)		// i의 값을 2로 나눴을 때 0일때 
			{						// i가 짝수일 때 부호 홀수일때는 숫자이므로
				if (str2 == "+" || str2 == "-" || str2 == "*" || str2 == "/") {
					proc = str2;	// proc에 부호를 넣어준다.
				}
				else				// 위에 if문중 부호가 없을 때 (부호가 잘못되었을 때)
				{
					cout << "잘못된 부호입니다." << "\n\n";
					i = -1;			// 잘못된 부호 이므로 계산을 못하므로 계산 결과를 출력하지 않음
					break;
				}
			}
			else				// i가 홀수일 때 ( 숫자일 때 )
			{					// 부호를 정상적으로 입력하지 않았을 때
				if (atof(str2.c_str()) == 0 && str2 != "0") { // 문자를 입력하였을 때 : atof : 문자열을 double형 값으로 바꿈
					cout << "숫자를 입력해 주세요." << "\n\n";
					i = -1;		// 문자가 입력되어 계산을 못하므로 계산 결과를 출력하지 않음
					break;
				}
				if (proc == "/" && atof(str2.c_str()) == 0)	// 나눗셈에서 0을 입력하였을 때
				{
					cout << "나눗셈은 0으로 나눌 수 없습니다." << "\n\n";
					i = -1;		// 0으로 나누는 계산을 못하므로 계산 결과를 출력하지 않음
					break;
				}
			}

			if (i == 1)		// 계산하는게 실수형이므로 실수형으로 변환하는 부분
			{
				r_val = stof(str2);
			}
			else
			{
				if ((i % 2) != 0)
				{
					if (proc == "+")		// 덧셈연산 
					{
						adder.set(r_val, stof(str2));
						r_val = adder.process();
					}
					else if (proc == "/") 	// 나눗셈 연산
					{
						divider.set(r_val, stof(str2));
						r_val = divider.process();
					}
					else if (proc == "*")	// 곱셈 연산
					{
						multiplier.set(r_val, stof(str2));
						r_val = multiplier.process();
					}
					else if (proc == "-")	// 뺄셈연산
					{
						subtracter.set(r_val, stof(str2));
						r_val = subtracter.process();
					}
				}
			}
		}

		if (i > 0)	// 계산결과 출력
		{
			cout << str1 << " = " << r_val << "\n\n";
		}

		cout << "==========================================================\n";
		system("pause");	 // 지워지기전에 잠시 결과를 확인하게 하기 위해
		system("cls");		// 시스템 화면 깨끗히
	}
}