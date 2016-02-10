//
//  particle.hpp
//  universe
//
//  Created by Miyeon Kim2 on 2/9/16.
//
//

#ifndef particle_hpp
#define particle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* particle_hpp */

class Particle {
public:
    
    void sphere();
    void cone();
    void cube();
    void minion();
    
    //properties
    int r, g, b;
    int size;
    int w;
    int h;
};