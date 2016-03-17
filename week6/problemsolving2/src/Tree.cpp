//
//  Tree.cpp
//  recursiveTree
//
//  Created by Miyeon Kim2 on 2/24/16.
//
//

#include "Tree.hpp"


void Tree::seed1(float dotSize, float angle, float x, float y){
    ofSetColor(255, 0, 0);
    ofFill();
    //nested if statement
    if(dotSize >1.0f){
        float r = ofRandomuf();    // gives you a random number between 0 & 1
        
        //first if statement will happen 98 of time
        if(r>0.02f){
            ofDrawCircle(x,y,dotSize);
            float newX = x + cos(angle) * dotSize;
            float newY = y + sin(angle) * dotSize;
            
            seed1(dotSize*0.99f, angle+angleOffSetA, newX, newY);
                //- and + changes the angle of rotating
            
        }   else {
            ofDrawCircle(x,y,dotSize);
            float newX = x + cos(angle) * dotSize;
            float newY = y + sin(angle) * dotSize;
            seed1(dotSize*0.99f, angle-angleOffSetA, newX, newY);
            seed2(dotSize*0.4f, angle+angleOffSetB, newX, newY);
            seed1(dotSize*0.6f, angle-angleOffSetB, newX, newY);
        }
    }
    
}

void Tree::seed2(float dotSize, float angle, float x, float y){
    ofSetColor(0, 0, 255);
    ofFill();
    if (dotSize > 1.0f){
        float r = ofRandomuf();
        if(r>0.05f){
            ofDrawCircle(x,y,dotSize);
            float newX = x + cos(angle) * dotSize;
            float newY = y + sin(angle) * dotSize;
            
            seed2(dotSize*0.99f, angle-angleOffSetA, newX, newY);
            
        } else {
            ofDrawCircle(x,y,dotSize);
            float newX = x + cos(angle) * dotSize;
            float newY = y + sin(angle) * dotSize;
            seed2(dotSize*0.99f, angle-angleOffSetA, newX, newY);
            seed1(dotSize*0.7f, angle+angleOffSetB, newX, newY);
            seed2(dotSize*0.9f, angle-angleOffSetB, newX, newY);
        }
    }
    
}
