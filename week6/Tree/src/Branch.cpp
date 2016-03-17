//
//  Branch.cpp
//  Tree
//
//  Created by Miyeon Kim2 on 3/2/16.
//
//

#include "Branch.hpp"
#include "ofMain.h"


void Branch::setup(float _xPos, float _yPos, float _length, float _width,
           float _splitPercentage, float _maxSplitAngle,
           float _subdivisions,
           float _maxSegments,
           float _segmentSinceStart,
           float _angle,
           float _curvature,
           ofColor _color) {

// 1. set initial values (parameters) - set incoming values to the last branch values

            xPos = _xPos;
            yPos = _yPos;
            length = _length;
            width = _width;
            splitPercentage = _splitPercentage;
            maxSplitAngle = _maxSplitAngle;
            subdivisions = _subdivisions;
            maxSegments = _maxSegments;
            segmentSinceStart = _segmentSinceStart;
            angle = _angle;
            curvature = _curvature;
            color = _color;

///2. check if the branch splits
    float r = ofRandomf();
    if(r > splitPercentage && segmentSinceStart != maxSegments){
        split = true;
    } else {
        split = false;
    }

// 3. draw a current branch - ofLine()
ofSetColor(color);
ofSetLineWidth(int(width));
ofDrawLine (xPos, yPos, xPos + length * cos(angle), yPos + length * sin(angle));

// 4. update the values for next branch
xPos += length*cos(angle);
yPos += length*sin(angle);
width = ofRandom(0.4, 0.8)*width;
length = ofRandom (0.7, 0.9)*length;
angle += curvature;
curvature = ofRandom(0, 2*PI/360);
segmentSinceStart++;

//5. recursion (state 1 & state 2) - if the branch splits, or doesn’t
    if(segmentSinceStart <= maxSegments){
        
        if(!split){
            // do not split
            Branch subBranch;
            subBranch.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, subdivisions, maxSegments, segmentSinceStart, angle, curvature, color);
            
        } else {
            // split occurs
            // split occurs
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, maxSplitAngle);
            subBranch1.setup(xPos, yPos, length, width, splitPercentage,
                             maxSplitAngle, subdivisions, maxSegments, segmentSinceStart,
                             angle1, curvature, color);
            
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos, length, width, splitPercentage,
                             maxSplitAngle, subdivisions, maxSegments, segmentSinceStart,
                             angle2, curvature, color);
        }



}


/*
 psudo code
 1. set initial values (parameters) - set incoming values to the last branch values
 
 2. check if the branch splits
 3. draw a current branch - ofLine()
 4. update the values for next branch
 5. recursion (state 1 & state 2) - if the branch splits, or doesn’t
*/
}