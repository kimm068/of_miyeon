#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.loadImage("cat.jpg");
    w = 500;
    h = 500;
}

//--------------------------------------------------------------
void ofApp::update(){
    unsigned char *data = new unsigned char[w * h * 4];
//    unasigned char *data= myImage.getPixels();
    
    for (int y=0; y<h; y++) {
        for (int x=0; x<w;  x++) {
            
            int red = ofMap( ofNoise(sin(ofGetElapsedTimef())), -1, 1, 0, 255 );

            int green = ofMap( ofNoise(cos(ofGetElapsedTimef())), -1, 1, 0, 255 );
            int blue = ofMap( ofNoise(tan(ofGetElapsedTimef())), -1, 1, 0, 255 );
            int alpha = 255;
            
            int index = 4 * ( x + w * y );
            cout << "indexs: " << index << endl;
            data[ index ] = red;
            data[ index + 1 ] = green;
            data[ index + 2 ] = blue;
            data[ index + 3 ] = alpha;
            
        }
    }
    
    myImage.setFromPixels(data, w, h, OF_IMAGE_COLOR_ALPHA);
    delete[] data;

}

//--------------------------------------------------------------
void ofApp::draw(){
//   ofEnableBlendMode(OF_BLENDMODE_SCREEN);
    ofBackground(255, 255, 255);
    ofSetColor( 255, 255, 255 );
    myImage.draw(0,0);
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
