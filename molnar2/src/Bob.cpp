//
//  Bob.cpp
//  molnar2
//
//  Created by syd on 2/26/18.
//
// Bob the box bc no more fukin naming overlaps

#include "Bob.h"

//--------------------------------------------------------------
void Bob::setup(){
    
    x = 20;
    y = 20;
    width = 10;
}

//--------------------------------------------------------------
void Bob::update(float a, float b){
    
    x = a;
    y = b;
    
}

//--------------------------------------------------------------
void Bob::draw(){
    
    ofDrawRectangle(x, y, width, width);
    
}

//--------------------------------------------------------------
