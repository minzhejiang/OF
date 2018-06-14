#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    //macs by default run on non vertical sync, which can make animation very very fast
    //this fixes that
    ofSetVerticalSync(true);
    
    //set background
    ofBackground(30, 30, 30);
    
    //set the "a" and "b" positions of the rectange...
    myRectangle.posa.x=10;
    myRectangle.posa.y=10;
    myRectangle.posb.x=590;
    myRectangle.posb.y=590;
    myRectangle.interpolateByPct(0); //start at 0 pct
    pct=0;         //a variable we can alter
}

//--------------------------------------------------------------
void ofApp::update(){
    pct+=0.01f;
    if(pct>1){
        pct=0;
    }
    myRectangle.interpolateByPct(pct);

}

//--------------------------------------------------------------
void ofApp::draw(){
    myRectangle.draw();
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
    //myRectangle.posa.x=x;
    //myRectangle.posa.y=y;

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
