//
//  Particle.hpp
//  mySketch_11_28
//
//  Created by echo jiang on 11/28/17.
//
//

#ifndef Particle_hpp
#define Particle_hpp
#include "ofMain.h"

#include <stdio.h>

class Particle{
public:
    void reset();
    void update();
    void draw();
    
    void toggleMode();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint force;
    float drag;
    
    bool isAttracting=true;
};

#endif /* Particle_hpp */
