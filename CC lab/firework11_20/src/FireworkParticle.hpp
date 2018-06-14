//
//  FireworkParticle.hpp
//  firework11_20
//
//  Created by echo jiang on 11/20/17.
//
//

#ifndef FireworkParticle_hpp
#define FireworkParticle_hpp
#include "ofMain.h"

#include <stdio.h>
class fireworkParticle {
    
public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    
//ofPoint: This class is a typedef (something similar to an alias) to ofVec3f, so it can be used the same way as that class.
    

    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
    int alpha;
};

#endif /* FireworkParticle_hpp */
