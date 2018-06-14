#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    int numBalls = 30;
    for(int i=0; i<numBalls; i++){
        Ball aBall;
        aBall.setup(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
        myBalls.push_back(aBall);
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<myBalls.size(); i++){
        myBalls[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<myBalls.size(); i++){
        myBalls[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    for(int i=0; i<myBalls.size(); i++){
        myBalls[i].kick();
    }

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
