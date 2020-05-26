#ifndef WIDETV_H
#define WIDETV_H

#include <iostream>
using namespace std;
#include "TV.h"

class WideTV : public TV {
    bool videoln;
public:
    WideTV(int size, bool videoln);
    bool getVideoln();
};


#endif // !WIDETV_H
