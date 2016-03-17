//
//  Particle.cpp
//  6_Class_Recursion
//
//  Created by Miyeon Kim2 on 3/8/16.
//
//

#include "Particle.hpp"



void particle::drawCircle(float x, float y, float diam) {
////    ofSetCircleResolution(100);
//    ofNoFill();
//    ofDrawSphere(x,y,diam,diam);
//    
//    diam = diam*.7;
//    //    x=x*0.9;;
//    //    y=y*0.9;
//    
//    
//    if(diam>1){
//        drawCircle(x,y,diam++);
//    }
//
}


void particle::drawBranch(float length, float theta){
    //    ofDrawLine(0, 0, 0, -length);
    
    //draw triangle
    //    ofDrawLine(0,0,length,length);
    //    ofDrawLine(length,length,length,0);
    //    ofDrawLine(length,0,0,0);
    //
    
//    ofSetLineWidth(2*sin(ofGetElapsedTimef()/2));
//    ofDrawLine(0,0,theta,length);
//    ofDrawLine(length,theta/2,theta/length,0);
//    ofDrawLine(length,0,0,0);
    
    ofSetLineWidth(2*sin(ofGetElapsedTimef()/2));
    ofDrawLine(0,0,theta,length);
    ofDrawLine(length,theta/2,theta/length,0);
    ofDrawLine(length,theta,0,0);
    ofDrawCircle(theta,length,theta,theta);
    
    ofTranslate(0, -theta);
    ofTranslate(0, theta);
//   
    length= length*0.5;
//    theta= theta*1.8;
////
//    length= length*0.2*(sin(ofGetElapsedTimef()/2));
    theta= theta*1.8*(sin(ofGetElapsedTimef()/2));
    
    
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