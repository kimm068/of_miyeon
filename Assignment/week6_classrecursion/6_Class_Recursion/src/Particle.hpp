//
//  Particle.hpp
//  6_Class_Recursion
//
//  Created by Miyeon Kim2 on 3/8/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Particle_hpp */


class particle{
public:
    void setup();
    void draw();
    float diam;
    float length;
    
    void drawCircle(float x,float y,float diam);
    //    void drawRectangle(float x, float y, float w, float h);
    void drawBranch(float length, float theta);

};