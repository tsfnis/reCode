#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
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
		
//        ofRectangle one(0, 0, 303, 503);
//        ofRectangle two(308, 196, 148, 502);
//        ofRectangle three(461, 337, 72, 503);
//        ofRectangle four(537, 115, 35, 503);
//        ofRectangle five(576, 0, 17, 503);
    
        ofRectangle one;
    
        ofTrueTypeFont font;
};
