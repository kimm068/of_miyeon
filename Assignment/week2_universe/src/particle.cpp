//
//  particle.cpp
//  universe
//
//  Created by Miyeon Kim2 on 2/9/16.
//
//

#include "particle.hpp"
#include "ofMain.h"



void Particle::sphere(){
    
    r= ofRandom(0,255);
    g= ofRandom(0,255);
    b= ofRandom(0,255);
    size = ofRandom(135, 150);
    
    ofSetColor(r);
    ofNoFill();
    ofDrawSphere(ofGetMouseX(), ofGetMouseY(), size, size);
    cout << "I'm sphere" << endl;

}
void Particle::cone(){
    
    ofSetColor(r,g,b);
    ofDrawCone(ofGetWidth()/2, ofGetHeight()/2, 200, 200);
    cout << "I'm cone" << endl;

}
//void Particle::cube(){
//    ofFill();
//    ofSetColor(200, 60, 130);
//    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 400, 400);
//    cout << "I'm cube" << endl;
//    
//}
