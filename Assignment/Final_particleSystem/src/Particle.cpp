//
//  Particle.cpp
//  particleSystem
//
//  Created by Miyeon Kim2 on 4/13/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    live=false;
}

ofPoint Particle::randomPointInCircle(float maxRad){
    ofPoint pnt;
    float rad = ofRandom(0,maxRad);
    float angle = ofRandom(0,TWO_PI);
    pnt.x = cos(angle) * rad;
    pnt.y = sin(angle) * rad;
    return pnt;
}

//-------------------------------------------------------------------------------------------
void Particle::setup(){
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live= true;
    
}

//-------------------------------------------------------------------------------------------
void Particle::update(float dt){
    if(live){
        //rotate velocity
        vel.rotate(0,0,param.rotate*dt);
        
        pos += vel*dt;
    
        time += dt;
    
        if(time >=lifeTime){
            live = false;
        }
    }

}

//-------------------------------------------------------------------------------------------
void Particle::draw(){
    if(live){
        float size = ofMap(time,0,lifeTime,5,abs(sin(ofGetElapsedTimef()/50)*125));
        size++;
        ofColor color = ofColor::red;
        float hue = ofMap (time,0,lifeTime,100,250);
        color.setHue(hue);
        ofSetColor(color);
        
        
      
        ofSetLineWidth(2);
        ofNoFill();
        ofDrawSphere(pos,size);
        
        

    }
}

