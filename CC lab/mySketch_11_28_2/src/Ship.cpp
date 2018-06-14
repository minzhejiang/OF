//
//  Ship.cpp
//  mySketch_11_28_2
//
//  Created by echo jiang on 11/28/17.
//
//

#include "Ship.hpp"

void Ship::setup(){
    position.set(ofGetWidth()/2,ofGetHeight()/2);
    velocity.set(0,0);
    angle=0;
}

void Ship::update(){
    velocity *=0.99f;
    position +=velocity;
    if(position.x>ofGetWidth()){
        position.x=0;
    }else if(position.x<0){
        position.x=ofGetWidth();
    }
    if(position.y>ofGetHeight()){
        position.y=0;
    }else if(position.y<0){
        position.y=ofGetHeight();
    }
    
    if(positionList.size()>50||velocity.length()<0.3){
        if(positionList.size()>0){
            positionList.pop_front();
        }
    }
    if(velocity.length()>=0.3){
        positionList.push_back(ofPoint(position.x-(5*sin(angle), position.y+(5*cos(angle)))));
    }
}

void Ship::draw(){
    ofPushMatrix();
    
    ofTranslate(position.x, position.y);
    ofRotate(ofRadToDeg(angle));
    ofSetColor(0,50,200);
    ofDrawTriangle(-10, 0, 0, -30, 10, 0);
    
    ofPopMatrix();
    
    ofSetColor(255,255,255);
    for(int i=0; i<positionList.size(); i++){
        ofDrawCircle(positionList[i].x, positionList[i].y, i/12.0f);
    }
}

void Ship::handleMouseDragged(int x, int y){
    ofPoint thrust=ofPoint(x-ofGetPreviousMouseX(), y-ofGetPreviousMouseY());
    velocity +=0.16*thrust;
    //update angle
    angle=atan2(velocity.y,velocity.x)+M_PI_2;
}


    


