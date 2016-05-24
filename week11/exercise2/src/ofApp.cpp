#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage1.loadImage("cat.jpg");
    myImage2.loadImage("cat2.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(100,100);
    myImage1.draw(0,0,500,400);
   
   
    
    for(int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            myImage2.draw(j*100,i*100,200,200);
        }
    }
    ofPushMatrix();
    {
        ofRotate(90);
        myImage2.draw(20,20,200,100);
        
    }
    ofPopMatrix();
        
    
    
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
