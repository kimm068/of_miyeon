//
//  Particle.hpp
//  week7_midterm
//
//  Created by Miyeon Kim2 on 3/15/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Particle_hpp */


class Particle {
public:
    void setup();
    void draw();
    float diam;
    float length;
    
    void drawCircle(float x,float y,float diam);
    void drawBranch(float length, float theta);
    
    
};