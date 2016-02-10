//
//  minion.cpp
//  universe
//
//  Created by Miyeon Kim2 on 2/10/16.
//
//

#include "minion.hpp"
#include "ofMain.h"


void Minion:: drawminions(){
  
    ofFill();
    ofSetColor(255, 255, 130);
    ofDrawRectangle(450, ofGetHeight()/3, 100, 160);
    
    //    //arms
    //    ofSetColor(255, 255, 130);
    //    ofDrawRectangle(550, 330, 50, 20);
    //
    //    ofSetColor(255, 255, 130);
    //    ofDrawRectangle(430, 330, 50, 20);
    //
    
    
    //leg
    ofSetColor(100);
    ofDrawRectangle(480, 430, 20, 20);
    ofSetColor(100);
    ofDrawRectangle(510, 430, 20, 20);
    
    ofSetColor(255);
    ofDrawSphere(500, 300, 35);
    
    ofSetColor(150);
    ofNoFill();
    ofDrawEllipse(500, 300, 55, 55);
    
    ofFill();
    ofSetColor(0);
    ofDrawSphere(500, 300, 13);
    
    ofFill();
    ofSetColor(40,40,140);
    ofDrawRectangle(450, 360, 100, 70);
    
    
    //cloth
    ofSetColor(255, 255, 130);
    ofDrawRectangle(410, 370, 60, 20);
    ofSetColor(255, 255, 130);
    ofDrawRectangle(530, 370, 60, 20);

}