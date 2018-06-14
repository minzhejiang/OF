//
//  rectangle.hpp
//  mySketch
//
//  Created by echo jiang on 11/25/17.
//
//

#ifndef rectangle_hpp
#define rectangle_hpp

#include <stdio.h>
#include "ofMain.h"

class rectangle{
public:
    rectangle();
    void draw();
    void interpolateByPct(float myPct);
    
    ofPoint pos;
    ofPoint posa;
    ofPoint posb;
    //what pct are we between "a" and "b"
};

#endif /* rectangle_hpp */
