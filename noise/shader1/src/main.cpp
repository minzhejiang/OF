#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    ofGLFWWindowSettings settings;// we define the OpenGL version we want to use
    settings.setGLVersion(3,2);// what is OpenGL3???
    settings.width=1024;
    settings.height=768;
    ofCreateWindow(settings);
    //this kicks off the running of ma app
//    ofSetupOpenGL(1024,768,OF_WINDOW);            // <-------- setup the GL context
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
