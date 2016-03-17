//
//  Branch.hpp
//  Tree
//
//  Created by Miyeon Kim2 on 3/2/16.
//
//

#ifndef Branch_hpp
#define Branch_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Branch_hpp */

class Branch : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos, float _length, float _width,
               float _splitPercentage, float _maxSplitAngle,
               float _subdivisions,
               float _maxSegments,
               float _segmentSinceStart,
               float _angle,
               float _curvature,
               ofColor _color);
               
    
    
    
private:
    float xPos, yPos;
    float length, width;
    float splitPercentage;
    float maxSplitAngle;
    float subdivisions;
    float maxSegments;
    float segmentSinceStart;
    float angle, curvature;
    ofColor color;
    bool split;
    
};