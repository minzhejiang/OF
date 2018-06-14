//
//  FireworkParticle.cpp
//  firework11_20
//
//  Created by echo jiang on 11/20/17.
//
//

#include "FireworkParticle.hpp"

void fireworkParticle::setup(int x, int y, ofColor _color) {
    position.set(x, y);
    color = _color;
    
    velocity.set(ofRandom(-1.2, 1.2), ofRandom(-1, 1));
    acceleration.set(0, ofRandom(0, 0.01));
    
    alpha = 255;
    
}

void fireworkParticle::update() {
    velocity += acceleration;
    position += velocity;
    
    alpha--;
}

void fireworkParticle::draw() {
    ofSetColor(color.r, color.g, color.b, alpha);
    ofDrawCircle(position, 2);
}



