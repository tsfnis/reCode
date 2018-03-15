#include "ofApp.h"

//wiggle woggle maker

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    ofBackground(0);
    
    
    for(int i = 0; i < 35; i++){
        for(int j = 0; j < 35; j++) {
            Bit temp;
            buds.push_back(temp);
            buds[i].setup();
            buds[i].update(i+20, j, 20);
            
        }
    }
    
    for(int i = 0; i < 35; i++){
        for(int j = 0; j < 35; j++) {
            Bit temp;
            budsB.push_back(temp);
            budsB[i].setup();
            budsB[i].update(i+20, j, 20);
            
        }
    }

    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
 
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofTranslate(150,150);
    
    float time = ofGetElapsedTimef();
    float sinTime = sin(time);
    float conTime = cos(time);
    
    ofSetColor(161, 252, 70);
    
    for(int i = 0; i < 35; i++){
        for(int j = 0; j < 35; j++) {
            budsB[i].update(i+i*20, j+ j*20, ofMap(cos(time * i/2), -1, 1, 1, 20));
            budsB[i].draw();
        }
    }
    
    ofSetColor(255, 79, 243);
    
    
    for(int i = 0; i < 35; i++){
        for(int j = 0; j < 35; j++) {
            buds[i].update(i+i*20, j+ j*20, ofMap(sin(time * j/2), -1, 1, 1, 20));
            buds[i].draw();
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
