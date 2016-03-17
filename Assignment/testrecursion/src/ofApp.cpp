#include "ofApp.h"



void ofApp::star(float x, float y, float diam){
    ofDrawSphere(x, y, diam, diam);
    
    diam = diam*0.7;
    x= x*0.9;
    
    if (diam>5){
        star(x,y,diam);
    }
}
//--------------------------------------------------------------

void ofApp::line(float length, float theta){
    ofDrawLine(0,0,0,-length);
    
    ofTranslate(0,-length);
    
    length= length*0.5;
    
    if(length>2){
        ofPushMatrix();
        ofRotate(-theta);
        line(length,theta);
        ofPopMatrix();
    
    }
    
}
                 
                 
                 
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(0x00FF33);
//    ofSetColor(30,90,150, 127);
    ofSetColor(255,0,0,(int)(5 * 10.0f) % 255);   // red, variable transparent

    float hue = fmodf(ofGetElapsedTimef()*10,255);
    //    ofNoFill();
    star(ofGetWidth()/2, ofGetHeight()/2, 100);
  

    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    line (500,40);
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
