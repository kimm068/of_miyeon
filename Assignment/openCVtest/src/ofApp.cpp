#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);
    
    w = ofGetWidth();
    h = ofGetHeight();
    
    movie.initGrabber(w, h, true);
    
    //reserve memory for cv images
    rgb.allocate(w, h);
    hsb.allocate(w, h);
    hue.allocate(w, h);
    sat.allocate(w, h);
    bri.allocate(w, h);
    filtered.allocate(w, h);
}
//--------------------------------------------------------------
void ofApp::update(){
    movie.update();
    
    if (movie.isFrameNew()) {
        
        //copy webcam pixels to rgb image
        rgb.setFromPixels(movie.getPixels(), w, h);
        

        //filter image based on the hue value were looking for
        for (int i=0; i<w*h; i++) {
            filtered.getPixels()[i] = ofInRange(hue.getPixels()[i],findHue-5,findHue+5) ? 255 : 0;
        }
        filtered.flagImageChanged();
        
        //run the contour finder on the filtered image to find blobs with a certain hue
        contours.findContours(filtered, 50, w*h/2, 1, false);
    }
}
//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    
    //draw all cv images
    rgb.draw(0,0);
    contours.draw(0,480);
    
    ofSetColor(255, 255, 0);
    ofFill();
    
    //draw red circles for found blobs
    for (int i=0; i<contours.nBlobs; i++) {
        ofCircle(contours.blobs[i].centroid.x, contours.blobs[i].centroid.y, 20);
    }
}

//------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
    
    //calculate local mouse x,y in image
    int mx = x % w;
    int my = y % h;
    
    //get hue value on mouse position
    findHue = hue.getPixels()[my*w+mx];
}