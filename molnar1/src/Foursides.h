//
//  Created by syd on 2/26/18.
//

#include <stdio.h>


class Foursides {
    
    public:
        float x;
        float y;
        float width;
//        ofPoint points[];
    vector<ofPoint> newPoints;
    
        void setup();
        void update();
        void draw();
        void disturb(float a, float b);
    
        //Foursides(); //constructor
};


