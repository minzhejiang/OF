#include "ofApp.h"
#include <iostream>

multiLeaf ml0;

multiLeaf::multiLeaf(){
    //offsetX= ofRandom(-100,150);
    //offsetY= ofRandom(-100,100);
}

void multiLeaf::setup(){  // why can't we load the image in the constructor?
  leaf.load("leaf.png");
    offsetX= ofRandom(-100,150);
    offsetY= ofRandom(-100,100);
}

void multiLeaf::update(){
  rX++;
  if (ofGetFrameNum() % 3 == 0)
    rY++;
  if (ofGetFrameNum() % 7 == 0)
    rZ++;
}

void multiLeaf::draw(){
  ofPushMatrix();
    ofTranslate(ofGetWidth()/2 +offsetX, ofGetHeight()/2 + offsetY);
    ofScale(0.3, 0.3, 0.3);  // can be 3 dimensional
    ofRotateX(rX);
    ofRotateY(rY);
    ofRotateZ(rZ);
    leaf.draw(0 - leaf.getWidth()/2, 0 - leaf.getHeight()/2);  // draw at new 0,0
  ofPopMatrix();

    cout<<offsetX<<endl;// how does it related to draw and framebuffer
}

//--------------------------------------------------------------
void ofApp::setup(){
//  ofSeedRandom();
    //why is always the same place
  ml0.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
  ml0.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(255);
 
  ml0.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
