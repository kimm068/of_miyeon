//
//  Particle.cpp
//  week3_recursion3
//
//  Created by Miyeon Kim2 on 2/23/16.
//
//

#include "Particle.hpp"
#include "ofMain.h"

void Particle::branch(float length, float theta){
    cout << "I'm branch" << endl;
    r= (ofRandom(0, 255));
    
//    ofDrawLine(0,0,0,-length);
    ofNoFill();
    ofDrawCircle(0, 0, -length);
    ofTranslate(0,-length);
    
    length= length*0.8;
    theta= theta*2;
    
    if(length>2){
        ofPushMatrix();
        ofRotate(theta);
        branch(length,theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        branch(length,theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(theta*2);
        branch(length,theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta*2);
        branch(length,theta);
        ofPopMatrix();
        
    }
}