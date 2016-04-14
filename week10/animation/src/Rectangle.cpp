//
//  Rectangle.cpp
//  animation
//
//  Created by Miyeon Kim2 on 4/6/16.
//
//

#include "Rectangle.hpp"


//Rectangle CPP File

Rectangle::Rectangle(){
    
    //initial position
    posA.x=10;
    posA.y=10;
    //final position
    posB.x=1000;
    posB.y=10;
}



void Rectangle::draw(){
    ofDrawRectangle(pos.x,pos.y,100,100);
}

void Rectangle::interpolateByPct(float myPct){
    pct = powf(myPct, 2); // myPct^2=myPct*myPct
    pos.x = (1 - pct)*posA.x + pct*posB.x;
    pos.y = (1 - pct)*posA.y + pct*posB.y;
}
    

void Rectangle::zenoToPoint(float catchX, float catchY){
    
    pos.x = catchupSpeed*catchX + (1 - catchupSpeed)*pos.x;
    pos.y = catchupSpeed*catchY + (1 - catchupSpeed)*pos.y;
    
}