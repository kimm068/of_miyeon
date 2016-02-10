#include "ofApp.h"

void ofApp::diamond(ofPoint center, float width, float height){
    ofDrawLine (center.x-width/2, center.y, center.x, center.y-height/2);
    ofDrawLine(center.x, center.y-height/2, center.x+width/2, center.y);
    ofDrawLine(center.x+width/2, center.y, center.x, center.y+height/2);
    ofDrawLine(center.x, center.y+height/2, center.x-width/2, center.y);
}


//--------------------------------------------------------------
void ofApp::setup(){
    //remove background
    ofSetBackgroundAuto(false);
    
    circleX = 0;
    
    center.x = ofGetWidth()/2;
    center.y= ofGetHeight()/2;
    height = 300;
    width = 300;
}

//--------------------------------------------------------------
void ofApp::update(){
    circleX++;
    // circleX = circleX + 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    //    ofBackground(0, 0, 0);
    ofSetColor(255, 0, 0);
    ofDrawEllipse(circleX, ofGetHeight()/2, 200, 200);
    //add text
    ofDrawBitmapString("Hello World!",100, 100);
    
    //    cout << "Hello World!" << endl;
    
    //to debug the value of circle X
    cout << "circleX: "<< circleX << endl;
    diamond (center, width, height);

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
