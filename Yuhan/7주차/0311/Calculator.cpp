// 헤더파일 ( 계산기, +, /, *, - )
#include "Calculator.h"
#include "Adder.h"
#include "Divider.h"
#include "Multiplier.h"
#include "Subtracter.h"

void Calculator::run() {
	string str1, str2, proc;
	int i;
	double r_val;

	str1 = str2 = proc = "";	// ""으로 초기화
	i = 0;

	Adder adder(0, 0);
	Divider divider(0, 0);
	Multiplier multiplier(0, 0);
	Subtracter subtracter(0, 0);

	while (i != -999)
	{
		i = r_val = 0;
		
		cout << "수식을 입력하세요. (ex : 10 + 3, z : 중지) >> ";
		getline(cin, str1);	// 값을 입력받아서 str1에 넣음

		istringstream s_buf(str1);	// 문자열을 분해해서 s_buf에 넣어줌

		while (s_buf >> str2)
		{
			i++;

			if (str2 == "z" || str2 == "Z")	// z나 Z을 입력했을 시 프로그램 종료
			{
				cout << "계산을 종료합니다." << "\n\n";
				i = -999;
				break;
			}

			if ((i % 2) == 0)	
			{		// 부호를 정상적으로 입력하였을 때 ( +, -, *, / )
				if (str2 == "+" or "-" or "*" or "/") {	
					proc = str2;
				}
				else // 부호가 잘못되었을 때
				{
					cout << "잘못된 부호입니다." << "\n\n";
					i = -1;
					break;
				}
			}
			else   
			{		// 부호를 정상적으로 입력하지 않았을 때
				if (atof(str2.c_str()) == 0 && str2 != "0") { // 문자를 입력하였을 때
					cout << "숫자를 입력해 주세요." << "\n\n";
					i = -1;
					break;
				}
				if (proc == "/" && atof(str2.c_str()) == 0)	// 나눗셈에서 0을 입력하였을 때
				{
					cout << "나눗셈은 0으로 나눌 수 없습니다." << "\n\n";
				}
			}

			if (i == 1)	
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
	}
}