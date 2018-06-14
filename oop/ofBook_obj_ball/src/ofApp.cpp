#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(255);
    ofSetCircleResolution(200);
    myBall.setup();
//    myBallBlue.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
    myBall.update();
//    myBallBlue.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    myBall.draw();
//    myBallBlue.draw();
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