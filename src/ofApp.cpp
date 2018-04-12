#include "ofApp.h"
#include<random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
 
 std::random_device rd;
 std::mt19937 eng1(rd());
 
 int min_x =0;
 int max_x = 1200;
 
 int min_y = 0;
 int max_y = 970;
 
 
 std::uniform_int_distribution<>unifrm_x(min_x,max_x);
  for(int n=0; n<20; n++){
    x.push_back(unifrm(eng1));  
  
  }
  
  std::uniform_int_distribution<>unifrm_y(min_y,max_y);
  for(int n=20; n<20; n++){
   y.push_back(unifrm(eng1));
  }
 
 
 
//X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
