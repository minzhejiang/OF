#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i=0; i)
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    // enable depth->video image calibration
    kinect.setRegistration(true);
    
    kinect.init();
    //kinect.init(true); // shows infrared instead of RGB video image
    //kinect.init(false, false); // disable video image (faster fps)
    
    kinect.open();		// opens first available kinect
    //kinect.open(1);	// open a kinect by id, starting with 0 (sorted by serial # lexicographically))
    //kinect.open("A00362A08602047A");	// open a kinect using it's unique serial #
    
    // print the intrinsic IR sensor values
    if(kinect.isConnected()) {
        ofLogNotice() << "sensor-emitter dist: " << kinect.getSensorEmitterDistance() << "cm";
        ofLogNotice() << "sensor-camera dist:  " << kinect.getSensorCameraDistance() << "cm";
        ofLogNotice() << "zero plane pixel size: " << kinect.getZeroPlanePixelSize() << "mm";
        ofLogNotice() << "zero plane dist: " << kinect.getZeroPlaneDistance() << "mm";
    }
    
#ifdef USE_TWO_KINECTS
    kinect2.init();
    kinect2.open();
#endif
    
    colorImg.allocate(kinect.width, kinect.height);
    grayImage.allocate(kinect.width, kinect.height);
    grayThreshNear.allocate(kinect.width, kinect.height);
    grayThreshFar.allocate(kinect.width, kinect.height);
    
    nearThreshold = 230;
    farThreshold = 70;
    bThreshWithOpenCV = true;
    
    ofSetFrameRate(60);
    
    // zero the tilt on startup
    angle = 0;
    kinect.setCameraTiltAngle(angle);
    
    // start from the front
    bDrawPointCloud = false;

}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(100, 100, 100);
    
    kinect.update();
    
    // there is a new frame and we are connected
    if(kinect.isFrameNew()) {
        
        // load grayscale depth image from the kinect source
        grayImage.setFromPixels(kinect.getDepthPixels());
        
        // we do two thresholds - one for the far plane and one for the near plane
        // we then do a cv And to get the pixels which are a union of the two thresholds
        if(bThreshWithOpenCV) {
            grayThreshNear = grayImage;
            grayThreshFar = grayImage;
            grayThreshNear.threshold(nearThreshold, true);
            grayThreshFar.threshold(farThreshold);
            cvAnd(grayThreshNear.getCvImage(), grayThreshFar.getCvImage(), grayImage.getCvImage(), NULL);
        } else {
            
            // or we do it ourselves - show people how they can work with the pixels
            ofPixels & pix = grayImage.getPixels();
            int numPixels = pix.size();
            for(int i = 0; i < numPixels; i++) {
                if(pix[i] < nearThreshold && pix[i] > farThreshold) {
                    pix[i] = 255;
                } else {
                    pix[i] = 0;
                }
            }
        }
        
        // update the cv images
        grayImage.flagImageChanged();
        
        // find contours which are between the size of 20 pixels and 1/3 the w*h pixels.
        // also, find holes is set to true so we will get interior contours as well....
        contourFinder.findContours(grayImage, 10, (kinect.width*kinect.height)/2, 20, false);
    }
    
#ifdef USE_TWO_KINECTS
    kinect2.update();
#endif


}

//--------------------------------------------------------------
void ofApp::draw(){

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
