#include "TV.h"
#include <iostream>
using namespace std;

TV::TV() {
    size = 20;
}

TV::TV(int size) {
    this->size = size;
}

int TV::getSize() {
    return size;
}
