//
//  circle.cpp
//  particleSystem
//
//  Created by Miyeon Kim2 on 5/10/16.
//
//

#include "circle.hpp"




void Recursion::drawCircle(float x, float y, float diam) {
    ofSetCircleResolution(100);
    ofDrawCircle(x,y,diam,diam);
    
    diam = diam*.7;
    
    
    if(diam>1){
        drawCircle(x,y,diam++);
    }
    
}



