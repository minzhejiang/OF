//
//  ball.hpp
//  of_11_14_02_particle_system
//
//  Created by echo jiang on 11/14/17.
//
//

#ifndef ball_hpp
#define ball_hpp
#include "ofMain.h"


#include <stdio.h>

class Ball{
public:
    void setup(int x, int y);
    void update();
    void draw();
    
    void kick();
    
    ofPoint position;
    ofVec2f velocity;
    ofVec2f deceleration;
    ofColor color;
    
    int radius;
};

#endif /* ball_hpp */

