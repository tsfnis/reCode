
//  Created by syd on 2/26/18.
//

#include "ofMain.h"
#include "Foursides.h"

//--------------------------------------------------------------
void Foursides::setup(){
    
    //default square size
    x = 20;
    y = 20;
    width = 250;
    
    //vector not filled here incase square isn't default size
    
}

//--------------------------------------------------------------
void Foursides::update(float a, float b, float w){
    x = a;
    y = b;
    width = w;
}

//--------------------------------------------------------------
void Foursides::draw(){
    
    for(int i = 0; i < width*4; i++){
        ofDrawCircle(newPoints[i].x, newPoints[i].y, 1);
    }
    
}
//--------------------------------------------------------------
void Foursides::fillVector(){
    
    //fill the points vector
    for(int i =0; i<width; i++){                                   //moving along the rows
        for(int j = 0; j<width; j++){                              //moving along the columns
            if(j==0 || j == width-1 || i == 0 || i == width-1){    //so only edges, no grid fill
//                ofPoint temp;
//                newPoints.push_back(temp);
                newPoints.push_back(ofPoint(x+i, y+j));
            }
            else{
                //dont make a point
            }
        }
    }
}
//--------------------------------------------------------------
void Foursides::disturb(){

    for(int i=0; i<newPoints.size(); i++){
        if (ofNoise(x*0.2,y*0.2, ofGetElapsedTimef()) < 0.5){
            newPoints[i].x += ofRandom(-1, 2);
        }
        else if (ofNoise(x*0.2,y*0.2, ofGetElapsedTimef()) < 0.8){
            newPoints[i].y += ofRandom(-1, 2);
        }
    }

}
//--------------------------------------------------------------
