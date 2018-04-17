#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowShape(593, 856);
    
    font.load("helvetica.otf", 30);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(253, 243, 208);
    ofSetColor(244, 108, 34);
    
//    ofDrawRectangle(0, 0, 303, 503);
//    ofDrawRectangle(308, 196, 148, 502);
//    ofDrawRectangle(461, 337, 72, 503);
//    ofDrawRectangle(537, 115, 35, 503);
//    ofDrawRectangle(576, 0, 17, 503);
    
    //ofRectangle one(0, 0, 303, 503);
    ofRectangle two(308, 196, 148, 502);
    ofRectangle three(461, 337, 72, 503);
    ofRectangle four(537, 115, 35, 503);
    ofRectangle five(576, 0, 17, 503);
    
    ofSetColor(0);
    font.drawString("wow text", 80, 260);
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
