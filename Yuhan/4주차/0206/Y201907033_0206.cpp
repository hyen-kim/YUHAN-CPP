#include <iostream>
using namespace std;

int main()
{
	cout << "주소를 입력하세요 >>";
	
	char address[100];
	cin.getline(address, 100, '-');	// 키보드로부터 주소 읽기 
	// 경기도 김포시--유한대
	// 출력결과 : 경기도 김포시
	
	cout << "주소는" << address << "입니다.\n";


	system("pause");
}

