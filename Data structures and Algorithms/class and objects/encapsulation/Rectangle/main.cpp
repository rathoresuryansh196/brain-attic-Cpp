//
//  main.cpp
//  CS102
//
//  Created by Lucas Brito on 8/12/17.
//  Copyright © 2017 Lucas Brito. All rights reserved.
//

#include <iostream>

class retangulo {
private:
    int x;
    int y;
public:
    retangulo(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    int getX() {
        return x;
    }
    void setX(int newX) {
        this->x = newX;
    }
    
    int getY() {
        return y;
    }
    void setY(int newY) {
        this->x = newY;
    }
};

int main() {
    retangulo rect1 = retangulo(10, 20);
    std::cout << rect1.getX() << std::endl;
    rect1.setX(9);
}
