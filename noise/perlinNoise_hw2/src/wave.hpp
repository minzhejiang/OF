//
//  wave.hpp
//  perlinNoise_hw2
//
//  Created by 江旻哲 on 4/19/18.
//

#ifndef wave_hpp
#define wave_hpp

#include <stdio.h>
#include "ofMain.h"

class wave{
    float rx, ry, rz;
    float rxv, ryv, rzv;
    float tx, ty;
    float txv, tyv;
    float offSetX, offSetY;
//    float color;
    float time;
    void setColor();
    void setShape();
    void setMovement();

public:
    wave();
    void setup();
    void update();
    void draw();
};

#endif /* wave_hpp */
