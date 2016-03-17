//
//  circle.cpp
//  week3_recursion2
//
//  Created by Miyeon Kim2 on 2/24/16.
//
//

#include "ofMain.h"
#include "circle.hpp"


void Recursion::drawCircle(float x, float y, float diam) {
    ofSetCircleResolution(100);
    ofDrawRectangle(x,y,diam,diam);
    
    diam = diam*.7;
//    x=x*0.9;;
//    y=y*0.9;
    
    
    if(diam>1){
        drawCircle(x,y,diam++);
    }

}


void Recursion::drawBranch(float length, float theta){
//    ofDrawLine(0, 0, 0, -length);

//draw triangle
    ofDrawLine(0,0,length,length);
    ofDrawLine(length,length,length,0);
    ofDrawLine(length,0,0,0);

    
    ofSetLineWidth(2*sin(ofGetElapsedTimef()/2));
    ofDrawLine(0,0,theta,length);
    ofDrawLine(length,theta/2,theta/length,0);
    ofDrawLine(length,0,0,0);
    
    
    ofTranslate(0, theta);
    ofTranslate(0, theta);
    
    length= length*0.5;
    theta= theta*1.8;
    
    if(length>2){
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
    }
}