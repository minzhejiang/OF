#include "ofApp.h"
#include <iostream>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    fbo.begin();
    ofClear(255, 255, 255,0);
    fbo.end();
    ofSetBackgroundColor(0, 0, 0);
    ofSetFrameRate(10);

}
float rx=0, ry=0, rz=0;
float tx=0, ty=0;
float offSetX=0, offSetY=0;

//--------------------------------------------------------------
void ofApp::update(){
    float time=ofGetElapsedTimef();
    rx=ofSignedNoise(time*0.01)*180;
    ry=ofSignedNoise(time*0.02, time*0.07)*180;
    rz=ofSignedNoise(time*0.03, time*0.05, time*0.01)*180;
    
    tx += sin(offSetX)*15+ofNoise(time*0.06)*5;
    ty += cos(offSetY)*20+ofNoise(time*0.08, time)*5;
    
    offSetX +=0.06;
    offSetY +=0.09;
    
    cout<< tx <<" "<< ty << ""<<sin(offSetX)<<endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    fbo.begin();
    ofSetColor(0,1);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());//gradient
        ofPushMatrix();
        ofSetColor(ofColor::cyan);
        ofTranslate(tx, ty);
        ofRotateX(rx);
        ofRotateY(ry);
        ofRotateZ(rz);
        ofDrawLine(-20, 0, 20, 0);
        ofPopMatrix();
    fbo.end();
    
    ofSetColor(255, 255, 255);
    fbo.draw(0,0);
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
