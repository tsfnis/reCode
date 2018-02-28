#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowShape(600, 600);
    ofBackground(255);
    ofSetColor(0);
    ofSetFrameRate(20);
    
    bdone = 0;
    cdone = 0;
    
    //fill each of the vectors with the same squares, will be translated in the actual drawing
    for(int i = 0; i < 15; i++){
        Foursides temp;
        budsA.push_back(temp);
        budsA[i].setup();
        budsA[i].update(20 + i*6, 20 + i*6, 250 - (20 + i*6)*2);
        budsA[i].fillVector();
    }
    for(int i = 0; i < 15; i++){
        Foursides temp;
        budsB.push_back(temp);
        budsB[i].setup();
        budsB[i].update(20 + i*6, 20 + i*6, 250 - (20 + i*6)*2);
        budsB[i].fillVector();
    }
    for(int i = 0; i < 15; i++){
        Foursides temp;
        budsC.push_back(temp);
        budsC[i].setup();
        budsC[i].update(20 + i*6, 20 + i*6, 250 - (20 + i*6)*2);
        budsC[i].fillVector();
    }
    for(int i = 0; i < 15; i++){
        Foursides temp;
        budsD.push_back(temp);
        budsD[i].setup();
        budsD[i].update(20 + i*6, 20 + i*6, 250 - (20 + i*6)*2);
        budsD[i].fillVector();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    


}

//--------------------------------------------------------------
void ofApp::draw(){
   
    
    
    
    
    //draw all four quadrants
    //upper left
    for(int i = 0; i < 15; i++){
        budsA[i].draw();
    }
    
    //upper right
    ofPushMatrix();
    ofTranslate(250, 0);
    for(int i = 0; i < 15; i++){
        budsB[i].draw();
    }
    ofPopMatrix();
    
    //lower left
    ofPushMatrix();
    ofTranslate(0, 250);
    for(int i = 0; i < 15; i++){
        budsC[i].draw();
    }
    ofPopMatrix();
    
    //lower right
    ofPushMatrix();
    ofTranslate(250, 250);
    for(int i = 0; i < 15; i++){
        budsD[i].draw();
    }
    ofPopMatrix();
    
    mangle();
    
}

//--------------------------------------------------------------
void ofApp::mangle(){

    while(bdone < 6) {
        for(int i = 0; i < 15; i++){
            if(i%4 == 0){
                budsB[i].disturb();
                bdone++;
            }
        }
    }
    
    
    while(cdone < 30) {
        for(int i = 0; i < 15; i++){
            if(i%2==0) {
                budsC[i].disturb();
                cdone++;
            }
        }
    }
    
    
    for(int i = 0; i < 15; i++){
        budsD[i].disturb();
    }
    
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
