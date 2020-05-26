#include "WideTV.h"

#include <iostream>
using namespace std;

WideTV::WideTV(int size, bool videoln) : TV(size) {
    this->videoln = videoln;
}

bool WideTV::getVideoln() {
    return videoln;
}