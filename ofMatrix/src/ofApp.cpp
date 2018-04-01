#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255);
    
    ofPushMatrix();//saves the current coordinate system
    // seems like best practice to indent the code between ofPushMatrix and ofPopMatrix
    
    // Original rectangle in blue
    ofSetColor(0, 0, 255);
    ofDrawRectangle(500, 200, 200, 200);
    
    // Scaled down rectangle in red
    ofTranslate(500, 200);
    ofScale(0.5, 0.5);  // We are only working in x and y, so let's leave the z scale at its default (1.0)
    ofSetColor(255, 0, 0);
    ofDrawRectangle(0, 0, 200, 200);
    ofPopMatrix();//returns us to the last saved coordinate system
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
