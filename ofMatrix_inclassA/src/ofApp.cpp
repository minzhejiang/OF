#include "ofApp.h"
#include <iostream>
using namespace std;

ofImage camomile;
/*
 Translate and scale the image to take approximately .25 of the screen and display it in the middle of the window.
 Enable the following keys to affect the image:
 x,X -  y,Y - z,Z: Rotate negatively or positively in this axis
 w,a,s,d: Translate the object by 1 pixel per update
 h,H - w,W: Scale the height/width negatively or positively
 
 try array!!

 */

float rX=0;
float rY=0;
float rZ=0;
float tX=0;
float tY=0;
float sH=0;
float sB=0;
Boolean x,X,y,Y,z,Z,h,H,b,B;

//--------------------------------------------------------------
void ofApp::setup(){
    camomile.load("camomile.png");
    ofBackground(0, 163, 174);
}
//--------------------------------------------------------------
void ofApp::update(){
    if (x == true){
        rX++;
    }
    if(X == true){
        rX--;
    }
    if (y == true){
        rY++;
    }
    if(Y == true){
        rY--;
    }
    if(ofGetFrameNum()%3==0 && z == true){
        rZ++;
    }
    if(ofGetFrameNum()%3==0 && Z == true){
        rZ--;
    }
    
    if(h == true){
        sH-= 0.01;
    }
    
    if(H == true){
        sH+= 0.01;
    }
    
    if(b == true){
        sB-= 0.01;
    }
    
    if(B == true){
        sB+= 0.01;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofTranslate(tX, tY);
    ofRotateX(rX);
    ofRotateX(rY);
    ofRotateX(rZ);
    ofScale(0.3,0.3,0.3);// can be 3 dimensional
    ofScale(sH+0.3, sB+0.3);
    camomile.draw(0 - camomile.getWidth()/2, 0 - camomile.getHeight()/2);  // draw at new 0,0
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
        switch(key){
            case 'x':
                x = true;
                break;
            case 'X':
                X =true;
                break;
            case 'y':
                y= true;
                break;
            case 'Y':
                Y=true;
                break;
            case 'z':
                z = true;
                break;
            case 'Z':
                Z = true;
                break;
            case 'd':
                tX++;
                break;
            case 'a':
                tX--;
                break;
            case 'w':
                tY--;
                break;
            case 's':
                tY++;
                break;
            case 'h':
                h = true;
                break;
            case 'H':
                H = true;
                break;
            case 'b':
                b = true;
                break;
            case 'B':
                B = true;
                break;
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    switch(key){
        case 'x':
            x = false;
            break;
        case 'X':
            X =false;
            break;
        case 'y':
            y= false;
            break;
        case 'Y':
            Y=false;
            break;
        case 'z':
            z = false;
            break;
        case 'Z':
            Z = false;
            break;
        case 'h':
            h = false;
            break;
        case 'H':
            H = false;
            break;
        case 'b':
            b = false;
            break;
        case 'B':
            B = false;
            break;
            }

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
