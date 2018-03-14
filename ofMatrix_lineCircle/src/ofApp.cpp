#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,255,255);
    ofSetCircleResolution(300);
    ofEnableSmoothing();

}

//--------------------------------------------------------------
void ofApp::update(){

}
int w=5, h=30;
//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(120);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 200);
    ofSetColor(255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 198);
    
    ofSetColor(120);
    ofSetLineWidth(10);
    
    ofPushMatrix();
        ofRotateZ(0);
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofTranslate(0, h-190);
        ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotateZ(15);
        ofTranslate(0, h-190);
        ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(30);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(45);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(60);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(75);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(90);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(105);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(120);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(135);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(150);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(165);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(180);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(195);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(210);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(225);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(240);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(255);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(270);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(285);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(300);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(315);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(330);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
    ofPopMatrix();
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(345);
    ofTranslate(0, h-190);
    ofDrawRectangle(-w, -h, 2*w , 2*h);
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
