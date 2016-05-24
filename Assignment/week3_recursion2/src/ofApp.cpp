#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    r = 10;
    j=10;
    cout<< r << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofNoFill();
   ofSetColor(abs(cos(ofGetElapsedTimef()/4)*250),abs(cos(ofGetElapsedTimef()/5)*250),(sin(ofGetElapsedTimef()/5)*150));
    circle.drawCircle (ofGetWidth()/2, ofGetHeight()/2, cos(ofGetElapsedTimef())*550);
    
    
    ofNoFill();
//    ofSetColor(r*20,200,r*90);
//    ofSetColor(0);
    ofSetColor(abs(tan(ofGetElapsedTimef()/2)*250),abs(cos(ofGetElapsedTimef()/2)*250),(sin(ofGetElapsedTimef()/5)*255), 90);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    line.drawBranch(250,abs(cos(ofGetElapsedTimef()/2)*250) );
    rectangle.drawBranch (200,cos(ofGetElapsedTimef())*100);
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
