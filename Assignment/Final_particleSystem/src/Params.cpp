//
//  Params.cpp
//  particleSystem
//
//  Created by Miyeon Kim2 on 4/13/16.
//
//

#include "Params.hpp"

void Params::setup(){
    eCenter= ofPoint(ofRandom(30,ofGetWidth()), ofRandom(0,ofGetHeight()),ofRandom(0,100));
    eRad = 50;
    
    //animation range
    velRad = 2000;
    
    //color
    lifeTime= 10.0;
//    rotate=90;
}