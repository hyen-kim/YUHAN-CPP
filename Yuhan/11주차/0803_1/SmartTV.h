#ifndef SMARTTV_H
#define SMARTTV_H

using namespace std;
#include "WideTV.h"
#include <string>

class SmartTV : public WideTV {
    string ipAddr;
public:
    SmartTV(string ipAddr, int size);
    string getIpAddr();
};


#endif //SMARTTV_H