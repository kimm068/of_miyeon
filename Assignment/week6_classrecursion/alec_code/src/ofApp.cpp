#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(0,0,0);
    
    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float xorig = mouseX;
    float yorig = mouseY;
    float radius = 50;
    float angle = ofGetElapsedTimef()*5;
    
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * -sin(angle);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255,255,255);
    ofDrawRectangle(x,y,30,30);
    
    
}
