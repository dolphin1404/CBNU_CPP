#include "Oval.h"

Oval::Oval() {
    width = 1;
    height = 1;
};

Oval::Oval(int w, int h) {
    width = w;
    height = h;
} 

Oval::~Oval() { 
    std::cout << "Oval �Ҹ� : width = " << width << ", height = " << height << std::endl;
}

int Oval::getWidth() const { 
    return width;
}

int Oval::getHeight() const { 
    return height;
}

void Oval::set(int w, int h) { 
    width = w;
    height = h;
}

void Oval::show() const { 
    std::cout << "width = " << width << ", height = " << height << std::endl;
}
