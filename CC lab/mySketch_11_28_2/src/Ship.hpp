//
//  Ship.hpp
//  mySketch_11_28_2
//
//  Created by echo jiang on 11/28/17.
//
//

#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include "ofMain.h"

class Ship{
public:
    void setup();
    void update();
    void draw();
    
    void handleMouseDragged(int x, int y);
    
    ofPoint position;
    ofPoint velocity;
    float angle;
    //trail position container
    deque<ofPoint> positionList
};
#endif /* Ship_hpp */
