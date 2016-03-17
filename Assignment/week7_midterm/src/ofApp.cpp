#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
 
    triangle.length= length*0.5;
   
    gui.setup();
    gui.add(length.setup("amount",10,1,200));

    
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor(50), ofColor(0));
    gui.draw();
   
    
    ofFill();
    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*250),abs(cos(ofGetElapsedTimef()/5)*250),(sin(ofGetElapsedTimef()/5)*50),90);
    circle.drawCircle (ofGetWidth()/2, ofGetHeight()/2, cos(ofGetElapsedTimef())*550);
    
    
    ofNoFill();
    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*250),abs(cos(ofGetElapsedTimef()/4)*250),(sin(ofGetElapsedTimef()/5)*55), 10);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    //    triangle.drawBranch(250,abs(cos(ofGetElapsedTimef()/2)*250) );
    triangle.drawBranch (200*length,cos(ofGetElapsedTimef()));

    
    star.drawStar(ofGetWidth()/2, ofGetHeight()/2);
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
