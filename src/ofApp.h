#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
void setup();
void update();
void draw();

void fract_gasket(int num_circles,float cx,float cy,float rad,int num_iter);
	
};
