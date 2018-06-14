#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    wWidth  = 640;
    wHeight = 480;
    
    hue = 0;
    sat = 0;
    val = 0;
    
    drawEnabled = true;
    
    wCam.initGrabber(wWidth, wHeight);
    
    origOutput.allocate(wWidth, wHeight);
    origOutputHSV.allocate(wWidth, wHeight);
    
    hueOutput.allocate(wWidth, wHeight);
    satOutput.allocate(wWidth, wHeight);
    briOutput.allocate(wWidth, wHeight);
    
    lockedOnPixels = new unsigned char [wWidth * wHeight];
    lockedOnTexture.allocate(wWidth, wHeight, GL_LUMINANCE);
    
    lockedOutput.allocate(wWidth, wHeight);
    
    scribblePixels = new unsigned char[wWidth * wHeight];
    for (int i = 0; i < (wWidth * wHeight); i++) {
        scribblePixels[i] = 0;
    }
    scribbleOutput.allocate(wWidth, wHeight, GL_LUMINANCE);
}

//--------------------------------------------------------------
void ofApp::update(){
    wCam.update();
    if (wCam.isFrameNew()) {
        origOutput.setFromPixels(wCam.getPixels().getData(), 640, 480);
        
        origOutputHSV = origOutput;
        origOutputHSV.convertRgbToHsv();
        
        //convert origOutPutHSV to gray scale image according to h, s, b
        origOutputHSV.convertToGrayscalePlanarImages(hueOutput, satOutput, briOutput);
        
        //Flag whether the image pixel data has changed so that the ofTexture can be updated
        hueOutput.flagImageChanged();
        satOutput.flagImageChanged();
        briOutput.flagImageChanged();
        
        unsigned char * huePixels = hueOutput.getPixels().getData();
        unsigned char * satPixels = satOutput.getPixels().getData();
        unsigned char * briPixels = briOutput.getPixels().getData();
        
        for (int i = 0; i < (wWidth * wHeight); i++) {
            if ((huePixels[i] >= 60  && huePixels[i] <= 85) &&
                (satPixels[i] >= 140)) {
                lockedOnPixels[i] = 255;
            } else {
                lockedOnPixels[i] = 0;
            }
        }
        
        lockedOnTexture.loadData(lockedOnPixels, wWidth, wHeight, GL_LUMINANCE);
        lockedOutput.setFromPixels(lockedOnPixels, wWidth, wHeight);
        //findContours(ofxCvGrayscaleImage &input, int minArea, int maxArea, int nConsidered, bool bFindHoles, bool bUseApproximation=true)
        lockedContours.findContours(lockedOutput, 160, (wWidth * wHeight) / 3, 1, false, true);
        
        
        //this is for drawing, do not need!!
        if (lockedContours.blobs.size() > 0 && drawEnabled) {
            int lineWidth = 3;
            //didn't get it
            for (int i = -lineWidth; i <= lineWidth; i++) {
                for (int j = -lineWidth; j <= lineWidth; j++) {
                    //The vector ofxCvBlob blobs returns each blob that was found in the image. at(0).centroid.y???
                    scribblePixels[((int)(lockedContours.blobs.at(0).centroid.y + i) * wWidth) + (int)((wWidth - lineWidth - 1) - lockedContours.blobs.at(0).centroid.x + j)] = 255;
                }
            }
        }
        
        scribbleOutput.loadData(scribblePixels, wWidth, wHeight, GL_LUMINANCE);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(100, 100, 100);
    
    ofSetColor(0xffffff);
    
    wCam.draw(0,0);
    origOutputHSV.draw(640, 0);
    lockedContours.draw();
    
    lockedOnTexture.draw(0, 480);
    
    scribbleOutput.draw(640, 480);
    
    char tmpStr[255];
    //Write formatted data to string: int sprintf ( char * str, const char * format, ... )
    // %i specifies integer.
    sprintf(tmpStr, "h: %i\ns: %i\nv: %i", hue, sat, val);
    ofDrawBitmapString(tmpStr, 20, 260);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_BACKSPACE) {
        for (int i = 0; i < (wWidth * wHeight); i++) {
            scribblePixels[i] = 0;
        }
    }
    
    if (key == OF_KEY_RETURN) { drawEnabled = false; }


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == OF_KEY_RETURN) { drawEnabled = true; }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    unsigned char * huePixels = hueOutput.getPixels().getData();
    unsigned char * satPixels = satOutput.getPixels().getData();
    unsigned char * briPixels = briOutput.getPixels().getData();
    
    hue = huePixels[x + (y * hueOutput.width)];
    sat = satPixels[x + (y * satOutput.width)];
    val = briPixels[x + (y * briOutput.width)];
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

