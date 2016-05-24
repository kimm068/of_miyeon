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

void Particle::setup(){
    pos = param.eCenter + randomPointInCircle(param.eRad);
    vel = randomPointInCircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
    live= true;
    
}

void Particle::update(float dt){
    if(live){
        //rotate velocity
        vel.rotate(0,0,param.rotate*dt);
        
        //update position (euler's method= pos is pixel, vel is time. so vel * dt makes it to pixel)
        pos += vel*dt;
    
        //update time + check if the particle is going to die based on lifeTime
        time += dt;
    
        if(time >=lifeTime){
            live = false;
        }
    }
    

}

void Particle::draw(){
    if(live){
        float size = ofMap(time,0,lifeTime,3,abs(sin(ofGetElapsedTimef()/70)*25));
        size++;
        ofColor color = ofColor::red;
        float hue = ofMap (time,0,lifeTime,120,25);
        color.setHue(hue);
        ofSetColor(color);
        
        
//----------------------------------camera-----------------------------------------
//        float movementSpeed = .1;
//        float cloudSize = ofGetWidth() / 9;
//        float spacing = 1;
//        
//        cam.begin();
//        
//        for(int i = 0; i < 10; i++) {
//            ofPushMatrix();
//            
//            float t = (ofGetElapsedTimef() + i * spacing) * movementSpeed;
//            ofVec3f pos(
//                        ofSignedNoise(t, 0, 0),
//                        ofSignedNoise(0, t, 0),
//                        ofSignedNoise(0, 0, t));
//            
//            
//            pos *= cloudSize;
//            ofTranslate(pos);
//            ofRotateX(pos.x);
//            ofRotateY(pos.y);
//            ofRotateZ(pos.z);
//            
        
            ofSetLineWidth(2);
            ofNoFill();
            ofDrawSphere(pos,size);
            
            
//            
//            ofPopMatrix();
//        }
//        
//        cam.end();

        

    }
}

