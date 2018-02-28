//
//  Created by syd on 2/26/18.
//

#include <stdio.h>


class Foursides {
    
    public:
        float x;
        float y;
        float width;
        vector<ofPoint> newPoints;
    
        void setup();
        void update(float a, float b, float w);
        void draw();
        void fillVector();
        void disturb();
    
    
        
};


