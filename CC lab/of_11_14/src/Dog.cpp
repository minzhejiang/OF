//
//  Dog.cpp
//  of_11_14
//
//  Created by echo jiang on 11/14/17.
//
//

#include "Dog.hpp"

Dog::Dog(){
}

void Dog::setup(){
    //generate a random color for the furcolor
    furcolor.setHsb(ofRandom(360), 64+ofRandom(128),64+ofRandom(128));
    position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
}

void Dog::update(){
}

void Dog::draw(){
    ofSetColor(furcolor);
    ofDrawRectangle(position.x, position.y, 20, 20);
}

void Dog::sit(){
}

//this is a method that allows you to access the dog's
//privat furColor member variable outside of the class

ofColor Dog::getFurColor(){
    return furColor;
}


