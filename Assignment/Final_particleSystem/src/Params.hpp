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
    void draw();
    ofPoint eCenter;
    float eRad;
    float velRad;
    float lifeTime; 
    float rotate;
    
};