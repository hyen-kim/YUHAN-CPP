#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;

    auto calc = [pi](int r) -> double {return pi * r * r; };
    cout << "면적은 " << calc(3) << endl;

    auto calc2 = [](int r, double pi1) -> double {return pi1 * r * r; };
    cout << "면적은 " << calc2(3, pi) << endl;

    system("pause");
}
