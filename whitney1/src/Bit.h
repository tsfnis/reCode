//
//  Bit.hp
//  whitney1
//
//  Created by syd on 3/3/18.
//

#ifndef Bit_h
#define Bit_h

#include <stdio.h>
#include "ofMain.h"

class Bit {
    
    public:
    float x;
    float y;
    float size;
    
    void setup();
    void shrink();
    void grow();
    void draw();
    void update(float a, float b, float newSize);
    

};

#endif /* Bit_h */
