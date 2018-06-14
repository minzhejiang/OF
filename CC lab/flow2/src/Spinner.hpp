//
//  Spinner.hpp
//  flow
//
//  Created by Echo Jiang.
//

#pragma once
#include "ofMain.h"

class Spinner {
public:
    void setup();
    void update();
    void draw();
    
    ofColor color;
    ofPoint size;
    ofPoint pos;
    ofPoint rotVel;
    ofPoint rot;
    
};
