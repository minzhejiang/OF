
import de.voidplus.leapmotion.*;

LeapMotion leap;

PImage [] portraits=new PImage[6];
boolean hold=false;
boolean blurred=false;

void setup() {
  size(876, 770, P3D);
  frameRate(999);
  for(int i=0; i<portraits.length; i++){
    portraits[i]=loadImage(i+".png");
    portraits[i].loadPixels();
  }
  background(0);
  //loadPixels();
  leap = new LeapMotion(this);
}

void draw() { 
  
  for (Hand hand : leap.getHands ()) {
  
  PVector hand_stabilized  = hand.getStabilizedPosition();
  int r = 1;
  
  for (int i = 0; i < 20000; i++) {
    float x =random(hand_stabilized.x, width);
    float y = random( hand_stabilized.y, height);
    int nimg=int(6*noise(x*.002+cos(frameCount*.0001), y*.002+sin(frameCount*.001), sin(frameCount*.01)));
  
    //color c = portraits[nimg].pixels[int(x)+int(y)*width];
    color c = portraits[nimg].get(int(x),int(y));
    noStroke();
    fill(c);
    rect(x, y, r, r);
  
    }
  }
  if(!hold)updatePixels();
  else if(!blurred){
    filter(BLUR, 1);
    blurred=true;
  }
}
void mousePressed(){
    hold=true;
  }
void mouseReleased(){
    hold=false;
    blurred=false; 
  }