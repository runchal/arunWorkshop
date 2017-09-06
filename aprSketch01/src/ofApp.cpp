#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}


//--------------------------------------------------------------
void ofApp::draw(){

    // make sure we're using millennial pink
    ofSetColor(ofColor::hotPink);
    
    //draw background rectangle
    ofDrawRectangle(0,600,1024,168);
    
    
    //draw bounding box for where letters will go
    ofSetColor(ofColor::black);
    
    ofDrawRectangle(600,600,424,168);
    
    
    //set A box, w needs to be 200
    ofSetColor(ofColor::darkRed);
    
//    float x = 100;
//    float y = 100;
//    float width = 300;
//    float height = 400;
//    
//    ofDrawLine(x,y,x+width,y);
//    ofDrawLine(x+width,y,x,y+height);
//    ofDrawLine(x,y+height,x+width,y+height);

    float x = 200;
    float y = 200;
    float width = 100;
    float height = 100;
    float barVertPos=40;
    float spacer=20;
    float barLengthRatio=0.33;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    x = x + 100 + spacer;
    
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    x = x + 100 + spacer;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    x = x + 100 + spacer;
    width = 200;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    x = ofRandom(0,100);
    width=100;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
 
    
    x = ofRandom(800,1024);
    width = 200;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    //set colors for line and circle
    ofSetColor(ofColor::white);
    
    y = ofRandom(0,700);
    width = 50;
    
    ofDrawLine((x+(width/2)),y,x,y+height);
    ofDrawLine((x+(width/2)),y,x+width, y+height);
    ofDrawLine(((x+width/2)-(barLengthRatio)/2*width),(y+barVertPos),((x+width/2)+barLengthRatio/2*width),(y+barVertPos));
    
    //set colors for line and circle
    ofSetColor(ofColor::white);
    

    
    
    
    //set colors for line and circle
    ofSetColor(ofColor::white);
    
    ofDrawLine(600,700,700,700);
    ofDrawLine(650,600,650,700);
    
    
    //draw A
    // establish midpoint, in this case it's 650,600
    // establish length of left side and needs to be 50
    ofDrawLine(650,600,600,700);
    
    //establish length of right side, this should be a mirror nad needs to
    ofDrawLine(650,600,700,700);
    
    //this is the bar which based on the vertical positioning needs a width of 46 to reach the edges (23)
    ofDrawLine(627,645,673,645);
    
    //draw A
    // establish midpoint, in this case it's 650,600
    // establish length of left side
    ofDrawLine(650,600,600,700);
    
    //establish length of right side, this should be a mirror
    ofDrawLine(650,600,700,700);
    
    //this is the bar which based on the vertical positioning needs a width of 46 to reach the edges (23)
    ofDrawLine(627,645,673,645);

    
    
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
