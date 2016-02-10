//
//  Particle.cpp
//  week2_class
//
//  Created by Miyeon Kim2 on 2/5/16.
//
//

#include "Particle.hpp"
#include "ofMain.h"


void Particle::sphere(){
        cout << "im sphere!!!" <<endl;
    }

void Particle::cube(){
    ofSetColor(255, 50, 50);
    ofDrawEllipse(ofGetMouseX(), ofGetMouseY(), 100, 100);
    cout << "yo cube!!!" << endl;
    
}
void Particle::cone(){
    cout << "hey cone!!!" << endl;
    }
