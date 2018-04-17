#include "ofApp.h"

//use the brightness of one image on another one

//--------------------------------------------------------------
void ofApp::setup(){
    
    img.load("image1.jpg");
    img.setImageType(OF_IMAGE_GRAYSCALE);
    
    img2.load("image2.jpg");             //image to be under
    img2.setImageType(OF_IMAGE_COLOR);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    ofTranslate(50,50);
    
    //  unaltered to be under
    //img2.draw(0,0);
    
    
    for (int i = 0; i < img.getWidth(); i+=3){
        for (int j = 0; j < img.getHeight(); j+=3){
            
            ofColor pixel = img.getColor(i, j);
            ofColor pixelNew = img2.getColor(i, j);
            float brightness = pixel.getBrightness();
           
            brightness = ofMap(brightness, 0, 255, 20, 250);
    
            ofSetColor(pixelNew, brightness);
            
            ofDrawCircle(i, j, 2);
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
