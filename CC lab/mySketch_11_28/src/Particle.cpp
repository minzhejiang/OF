//
//  Particle.cpp
//  mySketch_11_28
//
//  Created by echo jiang on 11/28/17.
//
//

#include "Particle.hpp"

void Particle::reset(){
    position.x=ofRandomWidth();
    position.y=ofRandomHeight();
    
    velocity.x=ofRandom(-3.9,3.9);
    velocity.y=ofRandom(-3.9,3.9);
    
    drag=ofRandom(0.95,0.998);
    
    force=ofPoint(0,0);
}

void Particle::update(){
    if(isAttracting){
        ofPoint attractPoint=ofPoint(ofGetMouseX(), ofGetMouseY());
        force=attractPoint-position;
        force.normalize();
        
        velocity*=drag;
        velocity+=force;
    }else{
        ofPoint repulsePoint=ofPoint(ofGetMouseX(),ofGetMouseY());
        
        force=repulsePoint-position;
        float distance=force.length();
        force.normalize();
        
        if(distance<150){
            velocity-=force*0.6;
        }
    }
    
    position += velocity;

}

void Particle::draw(){
    if(isAttracting){
        ofSetColor(255, 63, 180);
    }else{
        ofSetColor(208, 255, 63);
    }
    ofDrawCircle(position.x, position.y, 2);

}

void Particle::toggleMode(){
    isAttracting=!isAttracting;
    reset();
}
