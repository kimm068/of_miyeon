//
//  Rectangle.hpp
//  animation
//
//  Created by Miyeon Kim2 on 4/6/16.
//
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Rectangle_hpp */

class Rectangle{
public:
    //constructor
    Rectangle();
    
    //methods
    void draw();
    void interpolateByPct(float myPct);
    void zenoToPoint (float catchX, float catchY);
    float catchupSpeed;
    
    
    //params
    ofPoint posA, posB, pos;
    float pct; 
};

