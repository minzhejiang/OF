#include "ofApp.h"

vector<leaf> leaves;

leaf::leaf(){

}

void leaf::setup(){

//    loc += ofPoint(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    sTime = ofRandom(1);
//    sWeight = ofRandom(1, 1.5);

    
//    a=ofRandom(0.2,0.3);
//    b=ofRandom(0.3,0.4);
//    c=ofRandom(0.4,0.5);
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));

    
    fbo.allocate(ofGetWindowWidth(),ofGetWindowHeight());
    fbo.begin();
    ofClear(255,255,255,0);
    fbo.end();
    
    ofSetBackgroundColor(0,0,0);



}

void leaf::update(){
    float time = sTime*ofGetElapsedTimef();
    rX = ofSignedNoise(time * 0.1) * 180.0;
    rY = ofSignedNoise(time * 0.2) * 180.0;
    rZ = ofSignedNoise(time * 0.3) * 180.0;
//    dScale = (1 - ofNoise(time * 0.2)) * sWeight;
    
    moveX= sin(time)+ofSignedNoise(time*0.5)*10;
    moveY= cos(time)+ofSignedNoise(time*0.6)*10;
    moveZ= tan(time)+ofSignedNoise(time*0.7)*10;
    
    loc += ofPoint(moveX, moveY, moveZ);
}

void leaf::draw() {

    fbo.begin();
//    cout<<"hello world!"<<endl;

    ofSetColor(255,255,255, 10);  // alpha fade it
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    ofPushMatrix();
    ofTranslate(loc.x, loc.y, loc.z);
    
    
    ofRotateX(rX);
    ofRotateY(rY);
    ofRotateZ(rZ);
    
//    ofPushStyle();
    ofSetColor(color);
    ofFill();
    
    ofDrawLine(-40, 0, 40, 0);

//    ofPopStyle();
    ofPopMatrix();
    fbo.end();
    ofSetColor(255);
    fbo.draw(0,0);
    
}




//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i=0; i<5; i++){
        leaf newleaf;
        newleaf.setup();
        leaves.push_back(newleaf);
        
    }
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<leaves.size(); i++){
        leaves[i].update();
        cout << "my Point [" << i << "]: " << leaves[i].loc <<endl;
        
        
        if(leaves[i].loc.y<0||leaves[i].loc.y>ofGetWindowHeight()||leaves[i].loc.x<0||leaves[i].loc.x>ofGetWindowWidth()){
            leaves.erase(leaves.begin()+i);
            leaf newleaf;
            newleaf.setup();
            leaves.push_back(newleaf);
        }
    }

    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i=0; i<leaves.size(); i++){
        leaves[i].draw();
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
