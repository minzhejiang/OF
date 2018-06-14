#include "ofApp.h"
#include<string>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    mySerial.setup("/dev/cu.usbmodem14421", 9600);
    vidPlayer1.load("gelatin.MOV");
    vidPlayer2.load("glycerin.MOV");
    vidPlayer1.play();
    vidPlayer1.setLoopState(OF_LOOP_NORMAL);
    colorImg1.allocate(640,480);
    colorImg2.allocate(640, 480);
}
int myByte;
 int realByte;
//--------------------------------------------------------------
void ofApp::update(){
    myByte=mySerial.readByte();
    cout<<myByte<<endl;
//    if(myByte<0){
//        realByte=realByte;
//    }else{
//        realByte=myByte;
//    }
    if(!realByte>10){
        vidPlayer2.play();
    }else{
        vidPlayer1.play();
    }
    
    vidPlayer1.update();
    vidPlayer2.update();
    
    
    if(vidPlayer1.isFrameNew()){
        colorImg1.setFromPixels(vidPlayer1.getPixels());
    }
    if(vidPlayer2.isFrameNew()){
        colorImg2.setFromPixels(vidPlayer2.getPixels());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetHexColor(0xffffff);
    if(realByte>10){
        colorImg2.draw(0,0);
    }else{
    colorImg1.draw(0,0);
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
