//
//  Bit.cpp
//  whitney1
//
//  Created by syd on 3/3/18.
//

#include "Bit.h"

//--------------------------------------------------------------
void Bit::setup(){
 
    x = 0;
    y = 0;
    size = 20;
    
}
//--------------------------------------------------------------
void Bit::draw(){
 
    ofDrawRectangle(x, y, size, size);
    
}
//--------------------------------------------------------------
void Bit::shrink(){
 
    update(x+1, y+1, size-1);
    
}
//--------------------------------------------------------------
void Bit::grow(){
    
    update(x-1, y-1, size+1);
    
}
//--------------------------------------------------------------
void Bit::update(float a, float b, float newSize){
    
    x = a;
    y = b;
    size = newSize;
    
}
//--------------------------------------------------------------