//
//  alien.hpp
//  vector
//
//  Created by Miyeon Kim2 on 2/10/16.
//
//

#ifndef alien_hpp
#define alien_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* alien_hpp */

class Alien{
public:
    
    //properties
    int xPos, yPos;
    int velX, velY;
    int r,g,b;
    int diam;
    
    //constructor
    Alien();
    
    //method
    void setup(float _x, float _y);
    void update();
    void draw();
    
};