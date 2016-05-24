//
//  Particle.hpp
//  particleSystem
//
//  Created by Miyeon Kim2 on 4/13/16.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include "ofMain.h"
#include "Params.hpp"
#include <stdio.h>

#endif /* Particle_hpp */


class Particle{
public:
    
    //constructor
    Particle();
    
    //methods
    void setup();
    void update(float dt);
    void draw();
    
    //variables
    Params param;
    ofPoint pos;
    ofPoint vel;
    float time;
    float lifeTime;
    bool live;
    ofPoint randomPointInCircle(float maxRad);
   
    ofLight light; // creates a light and enables lighting
    ofEasyCam cam; // add mouse controls for camera movement



};