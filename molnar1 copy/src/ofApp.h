#pragma once

#include "ofMain.h"
#include "Foursides.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void mangle();
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
        vector<Foursides> budsA;    //a vector of squares for each quadrant
        vector<Foursides> budsB;
        vector<Foursides> budsC;
        vector<Foursides> budsD;
    
        int bdone;      //for stopping the square disintigration
        int cdone;
};
