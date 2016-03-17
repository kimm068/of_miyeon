//
//  alien.cpp
//  vector
//
//  Created by Miyeon Kim2 on 2/10/16.
//
//

#include "alien.hpp"
#include "ofMain.h"

Alien::Alien(){
    //properties
   // xPos= ofRandom(0,ofGetWidth());
   // yPos= ofRandom(0, ofGetHeight());
    velX= ofRandom(-3,3);
    velY= ofRandom(-3,3);
    r= ofRandom(255);
    g= ofRandom(255);
    b= ofRandom(255);
    diam= 100;
}

void Alien::setup(float _x, float _y){
    xPos = _x;
    yPos = _y;
}

void Alien::draw(){
    ofSetColor(r, g, b);
    ofFill();
    ofDrawEllipse(xPos, yPos, diam, diam);
    
 
}

void Alien::update(){
    xPos += velX; //xPos = xPos + velX
    yPos += velY; //yPos = yPos + velY
    
    if(xPos>ofGetWidth()-diam/2 || xPos <diam/2){
        velX= -velX;
    }
    if(yPos>ofGetHeight()-diam/2 || yPos < diam/2){
        velY= -velY;
    }
}
