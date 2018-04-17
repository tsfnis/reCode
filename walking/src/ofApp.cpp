#include "ofApp.h"
#include "data.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
   
    
    eye.load("3.jpg");
    eye.setImageType(OF_IMAGE_COLOR);
    
    shorts.load("4.jpg");
    shorts.setImageType(OF_IMAGE_COLOR);
    
    foot1.load("5.jpg");
    foot1.setImageType(OF_IMAGE_COLOR);
    
    foot2.load("6.jpg");
    foot2.setImageType(OF_IMAGE_COLOR);
    
    hand1.load("1.jpg");
    hand1.setImageType(OF_IMAGE_COLOR);
    
    hand2.load("2.jpg");
    hand2.setImageType(OF_IMAGE_COLOR);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    
    //----------------------------------------------------------------
    // the data is stored in a big flat array, let's copy it into something more managable
    // don't have to touch this :)
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data3d[ i * 24 * 3  + j * 3 + 0 ];
            float y = data3d[ i * 24 * 3  + j * 3 + 1 ];
            float z = data3d[ i * 24 * 3  + j * 3 + 2 ];
            frames[i][j].set(x,y,z);
        }
    }
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data2d[ i * 24 * 2  + j * 2 + 0 ];
            float y = data2d[ i * 24 * 2  + j * 2 + 1 ];
            frames2d[i][j].set(x,y);
        }
    }
    //----------------------------------------------------------------
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    
    // you don't have to touch this either:)
    //----------------------------- copy data into array
    ofPoint data3d[24];
    ofPoint data2d[24];
    
    int frameNumber =(int)(ofGetFrameNum()*0.4) % 30;
    for (int i = 0; i < 24; i++){
        data3d[i] = frames[ frameNumber][i];
        data2d[i] = frames2d[frameNumber][i];
    }
    
    
    // end do not touch
    
    
    //    //----------------------------- 3d
    cam.begin();
    cam.enableOrtho();
    ofSetColor(255);
    
    float time = ofGetElapsedTimef();
    
    for (int i = 0; i < 24; i++){
        
        
        
        //ofDrawLine(data3d[i], data3d[0]);
        //ofDrawSphere(data3d[i], mouseX/20.0);

                float x = data3d[i].x;
                float y = data3d[i].y;
                float z = data3d[i].z;
        

        //draw images on the appropriate body part
        
        if( i == 0){
            shorts.draw(x,y,z);
        } else if( i == 7){
            hand2.draw(x,y,z);
        } else if( i == 10){
            eye.draw(x,y,z);
        } else if( i == 15){
            hand1.draw(x,y,z);
        } else if( i == 22){
            foot1.draw(x,y,z);
        } else if( i == 18){
            foot2.draw(x,y,z);
        } else {
                //ofDrawSphere(ofPoint(x,y,z), 5);
        }
        
        //ofDrawBitmapString(ofToString(i), data3d[i]);
        
    }
    
    //ofDrawCircle(data3d[18], 10);
    
    
    cam.end();
    
    
    
    //
    for (int i = 0; i < 24; i++){
        //ofCircle(data2d[i], 4);
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
