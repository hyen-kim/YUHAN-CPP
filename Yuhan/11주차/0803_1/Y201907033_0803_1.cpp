#include <iostream>
#include "TV.h"
#include "WideTV.h"
#include "SmartTV.h"
using namespace std;


int main()
{
    SmartTV htv("192.0.0.1", 32);
    cout << "size = " << htv.getSize() << endl;
    cout << "videoln = " << boolalpha << htv.getVideoln() << endl;
    cout << "IP = " << htv.getIpAddr() << endl;

    system("pause");
}

