#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
ofBackground(0);
   //    ofSetBackgroundAuto(false);
    time0=ofGetElapsedTimef();
// p.param.setup(); //this is setting up our emitter
    bornCount = 0;
    
//amount of particles (it was 1500)
    bornRate = 150;
    
    
//recursion
    r = 10;
    j=10;
    
//----------
    ofSetVerticalSync(true);
    ofEnableDepthTest();
    ofEnableNormalizedTexCoords();
//    	ofSetLineWidth(10);
}


//--------------------------------------------------------------
void ofApp::update(){
    time = ofGetElapsedTimef();
    dt = ofClamp(time-time0, 0, 0.1);
    time0 = time;
    
    //deleting particles
    for(int i=0; i<p.size(); i++){
        if(!p[i].live){   //!p.live is the same thing as p.live ==false
            // p.setup();
            p.erase(p.begin() + i);
        }
    }
    
// p.update(dt);
    bornCount += dt*bornRate;
    
    if(bornCount>1){
        int bornN = int(bornCount);
        bornCount -= bornN;
        for(int i=0; i<bornN; i++){
            Particle newp;
            newp.param.setup();
            newp.setup();
            p.push_back(newp);
            newp.update(dt);
        }
    }
    for(int i=0; i<p.size(); i++){
        p[i].update(dt);
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
//recursion
//    ofNoFill();
//    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*50),abs(cos(ofGetElapsedTimef()/5)*250),abs(sin(ofGetElapsedTimef()/5)*150));
//    circle.drawCircle (ofGetWidth()/2, ofGetHeight()/2, cos(ofGetElapsedTimef())*550);
// 

    
//// p.draw();
//    for(int i=0; i<p.size(); i++){
//        p[i].draw();
//    }
    
//------camera-----
    float movementSpeed = .1;
    float cloudSize = ofGetWidth() / 10;
    float spacing = 1;
    
    cam.begin();
    
    for(int i = 0; i < 1; i++) {
        ofPushMatrix();
        
        float t = (ofGetElapsedTimef() + i * spacing) * movementSpeed;
        ofVec3f pos(
                    ofSignedNoise(t, 0, 0),
                    ofSignedNoise(0, t, 0),
                    ofSignedNoise(0, 0, t));
        
        pos *= cloudSize;
        ofTranslate(pos);
        ofRotateX(pos.x);
        ofRotateY(pos.y);
        ofRotateZ(pos.z);
    
//        
//    ofNoFill();
//    ofSetColor(abs(cos(ofGetElapsedTimef()/4)*50),abs(cos(ofGetElapsedTimef()/5)*250),abs(sin(ofGetElapsedTimef()/5)*150));
//    circle.drawCircle (cos(ofGetElapsedTimef())*250, abs(sin(ofGetElapsedTimef())*350), abs(cos(ofGetElapsedTimef())*550));
    
     //p.draw();
    for(int i=0; i<p.size(); i++){
        p[i].draw();
    }

        
        ofPopMatrix();
    }
    
    cam.end();

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

//-------------------------------------------------------------------------------------


