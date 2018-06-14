//
//  Ball.hpp
//  ofBook_obj_ball
//
//  Created by 江旻哲 on 4/5/18.
//

#ifndef Ball_hpp //if this class hasn't been defined, the program can define it
#define Ball_hpp//by using this if statement you prevent the class to be called more than once which would confuse the compiler

#include <stdio.h>
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework

class Ball{
public: // place public functions or variables declarations here
    //methods, equicalent to specific functions of your class objects
    void setup();// setup method, use this to setup your objects's initial state
    void update(); // update method, used to refresh your objectss properties
    void draw(); //draw method, this where you'll do the object's drawing
    
    //variables
    float x; //position
    float y;
    float speedY; // speed and direction
    float speedX;
    int dim;
    ofColor color; // color using ofColor type
    
    Ball(); // constructor-used to initialize an object, if no properties are passed the program sets them to the default value
private: //place private functions or variables declarations here
}; //don't forget the semicolon!!!

#endif /* Ball_hpp */
