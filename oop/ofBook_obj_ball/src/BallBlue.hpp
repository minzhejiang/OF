//
//  BallBlue.hpp
//  ofBook_obj_ball
//
//  Created by 江旻哲 on 4/5/18.
//
#pragma once // another and more modern way to prevent the compiler from including this file more than once

#ifndef BallBlue_hpp
#define BallBlue_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Ball.hpp"

class BallBlue: public Ball{ //we set the class to inherit from 'Ball'
public:
    virtual void draw(); // this is the only method we actually want to be different from the parent class
};


#endif /* BallBlue_hpp */
