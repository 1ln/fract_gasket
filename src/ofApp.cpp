#include "ofApp.h"

void ofApp::setup() {

ofBackground(0);
//ofNoFill();
ofSetColor(155);
//ofEnableSmoothing();

}

void ofApp::update() {


}

void ofApp::draw(){

fract_gasket(45,ofGetWidth()/2,ofGetHeight()/2,(ofGetWidth()/2)*0.5,15);

}

void ofApp::fract_gasket(int num_circles,float cx,float cy,float rad,int num_iter) {

float sm_rad = (rad * (sin(PI/num_circles)))/((1+sin(PI/num_circles)));

float next_rad = rad - sm_rad * 2;

for(int i = 0; i < num_circles; i++) {

    float angle = i*(2*PI)/num_circles;

    float x = cx + cos(angle) * (rad-sm_rad);
    float y = cy + sin(angle) * (rad-sm_rad);

    ofDrawCircle(x,y,sm_rad);
}

num_iter -=1;

if(num_iter > 0) {
fract_gasket(num_circles,cx,cy,next_rad,num_iter);
}

}

