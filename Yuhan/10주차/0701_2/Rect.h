#ifndef RECT_H
#define RECT_H

class Rect; 
bool equals(Rect r, Rect s);    

class Rect {    
    int width, height;
public:
    Rect(int width, int height);
    friend bool equals(Rect r, Rect s); 
};

#endif // !RECT_H
