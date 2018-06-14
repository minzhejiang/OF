#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    
    int numParticles = 350;
    for (int i = 0; i < numParticles; i++) {
        fireworkParticle firework;
        fireworks.push_back(firework);
    }
    
    fireworksRestart();
}

void ofApp::fireworksRestart() {
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    
    ofColor fireworkColor;
    fireworkColor.setHsb(ofRandom(255), 255, 192);
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].setup(position.x, position.y, fireworkColor);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].update();
    }
    //Check whether particles have totally faded out; if so, restart
    if (fireworks[0].alpha <= 0) {
        fireworksRestart();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0, 18);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    fireworkParticle temp;// create the firework object
    ofColor fireworkColor;
    fireworkColor.setHsb(ofRandom(255), 255, 192);
    temp.setup(ofRandomWidth(), ofRandomHeight(), fireworkColor);	// setup its initial state
    fireworks.push_back(temp);	// add it to the vector


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    fireworkParticle temp;// create the firework object
    ofColor fireworkColor;
    fireworkColor.setHsb(ofRandom(255), 255, 192);
    temp.setup(x, y, fireworkColor);	// setup its initial state
    fireworks.push_back(temp);	// add it to the vector

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
