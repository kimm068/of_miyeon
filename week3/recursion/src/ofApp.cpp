#include "ofApp.h"


void ofApp::drawBranch(float length, float theta){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    
    ofDrawLine(0,0,length,length);
    ofDrawLine(length,length,length,0);
    ofDrawLine(length,0,0,0);
    
 
    
    ////drag the whole sketch somewhere else! (point of center)
    ofTranslate(length,length);
    

    
      length= length*0.2*(sin(ofGetElapsedTimef()/2)*5);
//    length = length*0.5;
    
    if(length>0.5){
    
   //-----ONLY HERE-----
        
        //everything between push/pop only happens inside instead of being applied to the whole sketch
    ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
    ofPopMatrix();

    
    ofPushMatrix();
//    ofTranslate(0, -length);
    //ofRotate(-theta);
    //drawBranch(length, theta);
    ofPopMatrix();
        
        
        
        
//        ofPushStyle();
//        ofSetColor(0, 255, 0);
//        ofDrawEllipse(200, 200, 50, 50);
//        ofPopStyle();
     

    }
    
    
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate(200, 200);
//    drawBranch(200, 40);
     drawBranch (60,cos(ofGetElapsedTimef())*100);
    
    
   
    
//    
//    ofTranslate(ofGetWidth()/2, ofGetHeight());
//        ofDrawLine(0,0,0,-200);
//    
//    ofTranslate(0,-200);
//        ofRotate(40);
//        ofDrawLine(0,0,0,-200);
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
