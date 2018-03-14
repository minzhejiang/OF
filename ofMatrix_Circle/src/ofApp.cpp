#include "ofApp.h"
#include <iostream>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetCircleResolution(300);
    ofEnableSmoothing();
}

//--------------------------------------------------------------
void ofApp::update(){

}
int r=60;
//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, r);
    ofSetColor(255, 255, 255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, r-10);
    ofSetColor(0, 0, 0);
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(-72);
    ofTranslate(0, -150);
    ofScale(0.1, 0.1);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(-53);
    ofTranslate(0, -150);
    ofScale(0.2, 0.2);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(-31);
    ofTranslate(0, -150);
    ofScale(0.3, 0.3);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(-10);
    ofTranslate(0, -150);
    ofScale(0.4, 0.4);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(20);
    ofTranslate(0, -150);
    ofScale(0.5, 0.5);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(50);
    ofTranslate(0, -150);
    ofScale(0.6, 0.6);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(85);
    ofTranslate(0, -150);
    ofScale(0.7, 0.7);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(120);
    ofTranslate(0, -150);
    ofScale(0.8, 0.8);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(160);
    ofTranslate(0, -145);
    ofScale(0.9, 0.9);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(210);
    ofTranslate(0, -145);
    ofScale(1, 1);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(260);
    ofTranslate(0, -140);
    ofScale(1.1, 1.1);
    ofDrawCircle(-r, -r, r);
    ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
