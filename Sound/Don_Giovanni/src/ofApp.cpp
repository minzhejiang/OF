#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mozart.load("mozart.mp3");
    while(!mozart.isLoaded());
    mozart.play();
    nBandsToGet=360;
}

float* val;
//--------------------------------------------------------------
void ofApp::update(){
    
    ofBackground(ofColor::darkGreen);
    
    val= ofSoundGetSpectrum(nBandsToGet);
    
    
}
float getX (int deg, int radius) {
    float x = radius * cos(ofDegToRad(deg)) + ofGetWidth()/2;
    return (x);
}

float getY (int deg, int radius) {
    float y = radius * sin(ofDegToRad(deg)) + ofGetHeight()/2;
    return (y);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetCircleResolution(200);
    ofSetColor(ofColor::darkGoldenRod);
     int r = 100;  // radius
    for (int i = 0;i < nBandsToGet; i++){
        float x1 = getX(i, r);
        float y1 = getY(i, r);
        float x2 = getX(i, r + 2000 * val[i/8]);  // up to 2k larger (theoretically) but it will never get even close
        float y2 = getY(i, r + 2000 * val[i/8]);
       ofDrawLine (ofGetWidth()/2, ofGetHeight()/2, x2, y2);  // we only care about bottom 8th of the spectrum

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
