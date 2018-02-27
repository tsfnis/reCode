
//  Created by syd on 2/26/18.
//

#include "ofMain.h"
#include "Foursides.h"

//--------------------------------------------------------------
void Foursides::setup(){
    
    //default square size
    x = 10;
    y = 10;
    width = 100;
    int arraylength = width * 4;
//    points[arraylength];
    
    //fill the points array
    for(int i =0; i<width; i++){                                   //moving along the rows
        for(int j = 0; j<width; j++){                              //moving along the columns
            if(j==0 || j == width-1 || i == 0 || i == width-i){    //so only edges, no grid fill
//                points[i].x = x;
//                points[i].y = y;
                newPoints.push_back(ofPoint(x, y));
                
                x++;
            }
            else{
                //dont make a point
            }
        }
        y++;
    }
}

//--------------------------------------------------------------
void Foursides::update(){
    
}

//--------------------------------------------------------------
void Foursides::draw(){
    
    
    for(int i = 0; i < width*4; i++){
//        ofDrawCircle(points[i].x, points[i].y, 2);
        ofDrawCircle(newPoints[i].x, newPoints[i].y, 2);
    }
    
}
//--------------------------------------------------------------
