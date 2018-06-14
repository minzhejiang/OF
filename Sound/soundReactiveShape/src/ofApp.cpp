#include "ofApp.h"
#include <iostream>

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    mozart.loadSound("mozart.mp3");
    upperMids= new float [512];
    for(int i=0; i<512; i++){
        upperMids[i]=0;
    }
    bass= new float [512];
    for(int i=0; i<512; i++){
        bass[i]=0;
    }
    mozart.setLoop(true);
    brilliance= new float [512];
    for(int i=0; i<512; i++){
        brilliance[i]=0;
    }
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA32F);
    fbo.begin();
    ofClear(255, 255, 255,0);
    fbo.end();
//    mozart.setVolume(0.2);
    ofSetBackgroundColor(ofColor::darkGreen);
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSoundUpdate();//make sure that we actually get updates from our sound going into our spectrum
    
    float* value=ofSoundGetSpectrum(512);
    for(int i=0; i<51; i++){
        bass[i] *= 0.8f;
        if(bass[i]<value[i]){
            bass[i]=value[i];
        }
    }
    for(int i=51; i<102; i++){
        upperMids[i] *= 0.8f;
        if(upperMids[i]<value[i]){
            upperMids[i]=value[i];
        }
    }
    for(int i=102; i<512; i++){
        brilliance[i] *= 0.8f;
        if(brilliance[i]<value[i]){
            brilliance[i]=value[i];
        }
    }
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
    for (int i=51; i<102; i++) {
        float g=ofMap(upperMids[i],0,1,0,255);
        float xOffSet=ofMap(upperMids[i], 0, 1, 100, 200);
        float yOffSet=ofMap(upperMids[i], 0, 1, 100, 200);
        ofSetColor(200,80,g,g);
        ofDrawCircle(100, 100, upperMids[i]*1000);
        
        int r=100;
        for (int i = 0;i < 51; i++){
            float r=ofMap(bass[i], 0,1,100,255);
            ofSetColor(r, 100, 200,r);
            float x1 = getX(i, r);
            float y1 = getY(i, r);
            float x2 = getX(i, r + 2000 * bass[i/8]);  // up to 2k larger (theoretically) but it will never get even close
            float y2 = getY(i, r + 2000 * bass[i/8]);
            ofRotateY(r);
            ofDrawLine (x1-r, y1-r, x2, y2);
        }
    }
    for(int i=102; i<512; i++){
        float g=ofMap(brilliance[i],0,1,0,255);
        ofSetColor(200,g,80,g);
        ofDrawCircle(0, 0, brilliance[i]*800);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
        case '1':
            mozart.play();
            break;
        case '2':
            mozart.stop();
            break;
        default:
            break;
    }

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
