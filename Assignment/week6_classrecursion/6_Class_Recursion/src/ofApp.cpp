#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    circle.diam= 0.7f;
    line.length= length*0.5;
    gui.setup();
    gui.add(length.setup("length",10,1,200));
    
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
    gui.draw();

    //    if (j>9){
    //    ofSetColor(abs(sin(ofGetElapsedTimef()/2)*250),abs(cos(ofGetElapsedTimef()/2)*100),(sin(ofGetElapsedTimef()/5)*15),j);
    ////    ofSetColor(r);
    //    ofFill();
    //    circle.drawCircle (ofGetWidth()/2, ofGetHeight()/2, tan(ofGetElapsedTimef())*150);
    //    }
    
    ofFill();
    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*250),abs(cos(ofGetElapsedTimef()/5)*250),(sin(ofGetElapsedTimef()/5)*150),50);
    circle.drawCircle (ofGetWidth()/2, ofGetHeight()/2, cos(ofGetElapsedTimef())*550);
    
    
    ofNoFill();
    //    ofSetColor(r*20,200,r*90);
    //    ofSetColor(0);
    ofSetColor(abs(tan(ofGetElapsedTimef()/2)*250),abs(cos(ofGetElapsedTimef()/2)*250),(sin(ofGetElapsedTimef()/5)*255), 90);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    //    line.drawBranch(250,abs(cos(ofGetElapsedTimef()/2)*250) );
    line.drawBranch (length,cos(ofGetElapsedTimef())*100);
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
