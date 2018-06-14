//
//  Dog.hpp
//  of_11_14
//
//  Created by echo jiang on 11/14/17.
//
//

#ifndef Dog_hpp
#define Dog_hpp
#include "ofMain.h"

#include <stdio.h>

class Dog{    //define a class
    public:   //can be accessed outside the class definition
    Dog();    // constructor
    void setup();
    void update();//declare methods
    void draw();
    void sit();
    
    ofColor getFurcolor();
    
    string name;
    ofPoint position;
    
    private: ofColor furColor;
};

#endif /* Dog_hpp */
