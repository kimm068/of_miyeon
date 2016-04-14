//
//  Particle.cpp
//  week7_midterm
//
//  Created by Miyeon Kim2 on 3/15/16.
//
//

#include "Particle.hpp"


void Particle::drawCircle(float x, float y, float diam) {
    //center circles
    
        ofSetCircleResolution(100);
        ofNoFill();
    
        ofDrawCircle(x,y,diam,diam);
    
        diam = diam*.7;
   
    
        if(diam>1){
            drawCircle(x,y,diam++);
        }
    
}


void Particle::drawBranch(float length, float theta){
    
    float x2=150+length;
    float y2=(length/2)-theta;
    float x3=theta;
    float y3=100-length;
    
    
   
//big rotating circles
    ofNoFill();
    ofSetColor(sin(ofGetElapsedTimef()/5)*250,abs(cos(ofGetElapsedTimef()/5)*350),(sin(ofGetElapsedTimef()/3)*250),50);
    ofDrawCircle(x3,200,x2,y2);
 
    
//small rotating circles

    
        ofNoFill();
        ofSetColor(abs(tan(ofGetElapsedTimef()/5)*250),abs(tan(ofGetElapsedTimef()/5)*350),(sin(ofGetElapsedTimef()/2)*350));
        ofDrawCircle(x3,length,theta*5,theta*2);
    
    
//triangle
//    ofNoFill();
//    ofSetColor(sin(ofGetElapsedTimef())*250,abs(cos(ofGetElapsedTimef()/5)*350),(sin(ofGetElapsedTimef()/3)*250),50);
//    ofDrawTriangle(0, 0, 10, 30, 20, 10);
//    

    
    
    
    //----------
    ofTranslate(0, theta);
    ofTranslate(0, theta);
    
    
    length= length*0.5;
    theta= theta*0.8;
    
    if(length>2){
        ofPushMatrix();
//        ofRotate(theta/2);
        ofRotate(abs(cos(ofGetElapsedTimef()/4)*250));
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(abs(cos(ofGetElapsedTimef()/4)*253));
        drawBranch(length, theta);
        ofPopMatrix();
    }

}