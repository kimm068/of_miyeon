//
//  Params.hpp
//  particleSystem
//
//  Created by Miyeon Kim2 on 4/13/16.
//
//

#ifndef Params_hpp
#define Params_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Params_hpp */

class Params{
public:
    void setup();
    ofPoint eCenter; //center of the emitter
    float eRad; //radius of emitter
    float velRad; //max velocity
    float lifeTime; //max life
    float rotate; //rotation amount
    
    float attraction;
    float repulsion;
    float friction;
    float spinning;
    
};