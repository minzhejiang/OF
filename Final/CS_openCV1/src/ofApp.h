#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofVideoGrabber myVideoGrabber;
    ofTexture myTexture;
    //unsigned means that the values which describe the colors in our image are exclusively positive number
    //char means that each color component of each pixel is stored in a single 8-bit number-a byte, with values ranging from 0 to 255--which for many years was also the data type in which characters were stored.
    //* means that the data named by this variable is not just a single unsined char, but rather an array of unsigned chars()
    unsigned char* invertedVideoData;
    int camWidth;
    int camHeight;
};
