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
float rectMaxSpeed= 1;//set max speed
ofPoint rect_pos(50,50);
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
    float distX=mouseX-rect_pos.x;
    float distY=mouseX-rect_pos.y;
    
    rect_pos.x += rect_pos.x + 0.9 * (mouseX - rect_pos.x)/ofDist(rect_pos.x,rect_pos.y,mouseX,mouseY);
    rect_pos.y += rect_pos.y + 0.9 * (mouseY - rect_pos.y)/ofDist(rect_pos.x,rect_pos.y,mouseX,mouseY);

    
//    rect_pos.x += rect_catchUpSpeed * (mouseX-rect_pos.x);
//    rect_pos.y += rect_catchUpSpeed * (mouseY-rect_pos.y);
    //why you don't need to initiate the mouseX, mouseY???
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(198,246,55);
    ofRect(rect_pos.x,rect_pos.y, 20,20);
    
    float myX = rect_pos.x;
    float myY = rect_pos.y;
    cout <<  " " << rect_catchUpSpeed * (mouseX - myX) << " " << rect_catchUpSpeed * (mouseY - myY) << "\n";

}
