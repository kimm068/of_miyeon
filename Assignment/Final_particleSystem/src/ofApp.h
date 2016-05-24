#pragma once

#include "ofMain.h"
#include "Particle.hpp"
#include "circle.hpp"
#include "ofxGui.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    
    
//Particle p;
    vector <Particle> p;

    
    float bornCount;
    float bornRate; 
    
    float time;
    float time0;
    float dt;
    
//recursion circle
    Recursion circle;
    int r;
    float j;

    
    ofLight light;
    ofEasyCam cam;
    
    
    ofxPanel gui;
    ofxFloatSlider size;
    ofxFloatSlider color;

    ofSoundPlayer experimental;

        
};
