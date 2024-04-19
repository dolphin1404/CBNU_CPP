#ifndef OVAL_H
#define OVAL_H

#include <iostream>

class Oval {
private:
    int width;
    int height;

public:
    Oval(); 
    Oval(int w, int h); 
    ~Oval(); 

    int getWidth() const; 
    int getHeight() const; 
    void set(int w, int h); 
    void show() const; 
};
#endif 
