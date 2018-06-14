#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    myDog.setup();
    for(int i=0; i<10, i++){
        Dog temp=new Dog();
        myDogs.push_back(temp);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
//    myDog.update();
    for(int i=0, i<myDogs.size(); i++){
        myDogName[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    myDog.draw();

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
