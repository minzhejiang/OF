#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
#ifdef TARGET_OPENGLES
    shader.load("shadersES2/shader");
#else
    if(ofIsGLProgrammableRenderer()){
        shader.load("shadersGL3/shader");
    }else{
        shader.load("shadersGL2/shader");
    }
#endif
    
    float planeScale=0.75;
    int planeWidth=ofGetWidth()* planeScale;
    int planeHeight=ofGetHeight()* planeScale;
    int planeGridSize=20;
    int planeColumns=planeWidth/planeGridSize;
    int planeRows=planeHeight/planeGridSize;
    
    plane.set(planeWidth, planeHeight, planeColumns, planeRows, OF_PRIMITIVE_TRIANGLES);// what's the difference between lines and triangles

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float percentX=mouseX/(float)ofGetWidth();
    percentX=ofClamp(percentX, 0, 1); //Clamp a value between min and max.
    
    //the mouse X position changes the color of the plane.
    //please have a look inside the frag shader,
    //we are using the globalColor value that OF passes into the shader everytime you call ofSetColor().
    
    ofColor colorLeft= ofColor::magenta;
    ofColor colorRight= ofColor::cyan;
    ofColor colorMix=colorLeft.getLerped(colorRight, percentX);
    ofSetColor(colorMix);
    
    shader.begin();
    
    //a lot of the time you have to pass in variables into the shader
    //in this case we need to pass it the elapsed time for the sine wave animation
    shader.setUniform1f("time", ofGetElapsedTimef()); // set the uniform variable from the vertext shader file
    //uniform is something that won't change per vertex
    
    //translate plane into center screen
    float tx=ofGetWidth()/2;
    float ty=ofGetHeight()/2;
    ofTranslate(tx, ty);
    
    //the mouse Y position changes the rotation of the plane.
    float percentY=mouseY/(float)ofGetHeight();
    float rotation=ofMap(percentY, 0, 1, 0, 120,true);
    ofRotate(rotation, 1, 0, 0); //Produces a rotation around the vector (vecX,vecY,vecZ). the rotation here is a float
    
    plane.drawWireframe();
    
    shader.end();
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
