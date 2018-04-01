#include "ofApp.h"
#include "ofMain.h"
#include <iostream>
using namespace std;

/*
 Requirements:
 Change the type of easing from ease-out to ease-in.
 (Hint: Make a new variable == your max speed)

 */
float rect_catchUpSpeed = 0.01f;  // speed with which we pursue the mouse
float rectMaxSpeed= 13.88f;//set max speed

ofPoint rect_pos;
//why you don't need to initiate the rect_pos.x, rect_pos.y??? Do that mean set it to default(0,0);

//--------------------------------------------------------------
void ofApp::setup(){
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	ofSetVerticalSync(true);

	// set background: 
	ofEnableAlphaBlending();
	ofBackground(30,30,30);

}

//--------------------------------------------------------------
void ofApp::update(){

    rect_pos.x += rectMaxSpeed-(rect_catchUpSpeed * (mouseX-rect_pos.x));
    rect_pos.y += rectMaxSpeed-(rect_catchUpSpeed * (mouseY-rect_pos.y));
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(198,246,55);
    ofDrawRectangle(rect_pos.x,rect_pos.y, 20,20);
    
    float myX = rect_pos.x;
    float myY = rect_pos.y;
    cout <<  " " << rectMaxSpeed-(rect_catchUpSpeed * (mouseX - myX)) << " " << rectMaxSpeed-(rect_catchUpSpeed * (mouseY - myY)) << "\n";
}
