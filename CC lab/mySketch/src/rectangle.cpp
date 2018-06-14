//
//  rectangle.cpp
//  mySketch
//
//  Created by echo jiang on 11/25/17.
//
//

#include "rectangle.hpp"
//----------------------------------------------

rectangle::rectangle(){
}

//----------------------------------------------

void rectangle:: draw(){
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER); //center around the position
    ofSetColor(198,246,55);
    ofRect(pos.x, pos.y, 20, 20);;
}

//-----------------------------------------------

void rectangle::interpolateByPct(float myPct){
    pos.x=(1-myPct)*posa.x+(myPct)*posb.x;
    pos.y=(1-myPct)*posa.y+(myPct)*posb.y;
    
    //this is an alternative way to write above.
    //different style, but the same mathematically
    //pos.x=posa.x+(pct)*(posb.x-posa.x)
}
