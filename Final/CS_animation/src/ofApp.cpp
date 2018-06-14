#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(1680, 1050);
    ofSetCircleResolution(220);
    
    wWidth=640;
    wHeight=480;
    
    hue=0;
    sat=0;
    val=0;
    
    wCam.initGrabber(wWidth, wHeight);
    
    origOutput.allocate(wWidth, wHeight);
    origOutputHSV.allocate(wWidth, wHeight);
    
    hueOutput.allocate(wWidth, wHeight);
    satOutput.allocate(wWidth, wHeight);
    briOutput.allocate(wWidth, wHeight);
    
    lockedOnPixels= new unsigned char [wWidth*wHeight];
    lockedOnTexture.allocate(wWidth, wHeight, GL_LUMINANCE);
    
}

bool colorState=false;
ofColor circle(0,255,0);
//--------------------------------------------------------------
void ofApp::update(){
    wCam.update();
    if(wCam.isFrameNew()){
        origOutput.setFromPixels(wCam.getPixels().getData(), wWidth, wHeight);
        
        origOutputHSV=origOutput;
        origOutputHSV.convertRgbToHsv();
        
         //convert origOutPutHSV to gray scale image according to h, s, b which is converted from r, g, b
        origOutputHSV.convertToGrayscalePlanarImages(hueOutput, satOutput, briOutput);
        
        //Flag whether the image pixel data has changed so that the ofTexture can be updated
        hueOutput.flagImageChanged();
        satOutput.flagImageChanged();
        briOutput.flagImageChanged();
        
        unsigned char * huePixels=hueOutput.getPixels().getData();
        unsigned char * satPixels=satOutput.getPixels().getData();
        unsigned char * briPixels=briOutput.getPixels().getData();
        
        for(int i=0; i<(wWidth*wHeight); i++){
            if((huePixels[i]> 42 && huePixels[i]<= 85)&& (satPixels[i]>=140)){
                lockedOnPixels[i]=255;
            }else{
                lockedOnPixels[i]=0;
            }
        }
        lockedOnTexture.loadData(lockedOnPixels, wWidth, wHeight, GL_LUMINANCE);
        lockedOutput.setFromPixels(lockedOnPixels, wWidth, wHeight);
        
        lockedContours.findContours(lockedOutput, 160, (wWidth*wHeight)/3, 1, false);
        
        if(lockedContours.blobs.size()>0){
            colorState=true;
            
        }else{
            colorState=false;
        }

    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor bg_up(226,234,217);
    ofColor bg_down(199,176,114);
    ofBackgroundGradient(bg_down, bg_up, OF_GRADIENT_LINEAR);
    
    ofSetColor(255);
    
    wCam.draw(0, 0);
    origOutputHSV.draw(640,0);
    lockedContours.draw();
    
    lockedOnTexture.draw(0,480);
    if(colorState){
        ofSetColor(circle);
        
    }else{
            ofSetColor(0);
        };
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 100);
    
    
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
