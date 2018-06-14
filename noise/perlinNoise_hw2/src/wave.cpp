//
//  wave.cpp
//  perlinNoise_hw2
//
//  Created by 江旻哲 on 4/19/18.
/*
 Phase 2
 Reorganize your code to create a wave object.
 Use ofFbo for a fading effect.
 Adjust the Perlin noise ofMap so it allows a wave to move off the screen in every direction.  (by a healthy margin)
 Create a vector object of type wave object.
 Keep 5 waves of different colors on the screen at the same time.
 When one goes off screen, restart it under the mouse.
 Give each of the 5 different "personalities" expressed through color, shape and/or movement.
 */

#include "wave.hpp"

 float color;
wave::wave(){
    rx=0, ry=0, rz=0;
    tx=0, ty=0;
    offSetX=0, offSetY=0;
    color=0;
    time=ofGetElapsedTimef();
//    setColor(255);
    setShape();
    setMovement();
}

void wave::setColor(){
//    color = c;
    ofColor waveColor(color, 255,255);
}

void wave::setShape(){
    rxv=ofRandom(0.1);
    ryv=ofRandom(0.1);
    rzv=ofRandom(0.1);
}

void wave::setMovement(){
    txv = ofRandom(0.1);
    tyv = ofRandom(0.1);
}

void setup(){
}

void update(){
//    rx =ofSignedNoise(time * rxv)*180;
//    ry =ofSignedNoise(time * ryv, time *0.07)*180;
//    rz =ofSignedNoise(time * rzv, time *0.05, time*0.01)*180;
//
//    tx += sin(offSetX)*15+ofNoise(time*txv)*5;
//    ty += cos(offSetY)*20+ofNoise(time*tyv, time)*5;
//
//    offSetX +=0.06;
//    offSetY +=0.09;
    
}
