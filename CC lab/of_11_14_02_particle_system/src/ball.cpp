//
//  ball.cpp
//  of_11_14_02_particle_system
//
//  Created by echo jiang on 11/14/17.
//
//

#include "ball.hpp"

void Ball:: setup(int x, int y){
    position.x=x;
    position.y=y;
    velocity.set(0,0);
    deceleration.set(0.99,0.99);
    color.setHsb(ofRandom(360), 128, 128);
    
    radius=20;
}

void Ball::update(){
    position +=velocity;
    velocity*=deceleration;
    
    if(position.x<0|| position.x>ofGetWidth()){
        velocity.x*=-1;
    }
    
    if(position.y<0||position.y>ofGetHeight()){
        velocity.y*=-1;
    }
}

void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(position.x, position.y, radius);
}

void Ball::kick(){
    velocity.x +=ofRandom(-5,5);
    velocity.y +=ofRandom(-5,5);
}

