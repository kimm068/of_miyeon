//
//  Star.cpp
//  week7_midterm
//
//  Created by Miyeon Kim2 on 3/15/16.
//
//

#include "Star.hpp"


void Star::drawStar(float length, float theta){

float x2=200;
float y2=(length/2)-theta;
float x3=theta/2;
float y3=100-length;

    
    

    ofNoFill();
    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*350),abs(cos(ofGetElapsedTimef()/4)*350),abs(cos(ofGetElapsedTimef()/8)*35));
    
    ofDrawTriangle(0, -40, 45, 40, -45, 40);
    ofDrawTriangle(0, 60, -45, -15, 45, -15);
    
    ofTranslate(0, theta/2);
    ofTranslate(0, theta/length);
    
    length= length*0.5;
    theta= theta*0.8;

    
 
}