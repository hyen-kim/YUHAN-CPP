#include "SmartTV.h"
#include <string>
#include <iostream>
using namespace std;

SmartTV::SmartTV(string ipAddr, int size) : WideTV(size, true) {
    this->ipAddr = ipAddr;
}

string SmartTV::getIpAddr() {
    return ipAddr;
}
