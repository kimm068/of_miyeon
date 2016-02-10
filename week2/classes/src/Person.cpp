//
//  Person.cpp
//  classes
//
//  Created by Miyeon Kim2 on 2/3/16.
//
//

#include "Person.hpp"
#include "ofMain.h"

void Person::eat(){
    cout << "I'm eating" << endl;
}

void Person::sleep(){
    cout << "I'm sleeping" << endl;
    ofDrawEllipse(ofGetWidth()/2, ofGetHeight()/2, 100,100);

}

void Person::talk(){
    
}

void Person::lie(){
    
}
void Person::shower(){
    
}
void Person::fart(){
    
}

void Person::hello(){
    cout << "Hello my name is: " << name << endl;
}
