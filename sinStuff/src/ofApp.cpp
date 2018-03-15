#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

     ofBackground(255);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0);
    ofSetLineWidth(3);
    
    float time = ofGetElapsedTimef();
    
    //lil spikes that come at the mouse
    ofDrawLine(200, 400, mouseX, ofMap(sin(time), -1, 1, 400, mouseY));
    ofDrawLine(220, 400, mouseX, ofMap(sin(time + 2), -1, 1, 400, mouseY));
    ofDrawLine(240, 400, mouseX, ofMap(sin(time + 5), -1, 1, 400, mouseY));
    ofDrawLine(210, 400, mouseX, ofMap(sin(time * 3), -1, 1, 400, mouseY));
    ofDrawLine(230, 400, mouseX, ofMap(sin(time * .9), -1, 1, 400, mouseY));
    ofDrawLine(280, 400, mouseX, ofMap(sin(time * 5), -1, 1, 400, mouseY));

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
