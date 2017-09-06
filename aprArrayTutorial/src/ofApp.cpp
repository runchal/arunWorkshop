#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    float time = ofGetElapsedTimef();
    
    for (int i = 0; i < 50; i++){
        xPos[i] = ofMap(sin(time),-1,1,0,ofGetWidth());
        yPos[i] = ofMap(sin(time),-1,1,0,ofGetHeight());
        circlesize[i] = ofMap(sin(time),-1,1,0,15);
        speed[i] = ofRandom(0.1, 10.0);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef();
    
    for (int i = 1; i < 50; i++){
        xPos[i] = ofMap(ofSignedNoise(i*0.1+time*0.1),-0.5,0.5,0,ofGetWidth());
        yPos[i] = ofMap(ofSignedNoise(i*0.1+time*0.1 + 1000),-1,1,0,ofGetHeight());
        circlesize[i] = ofMap(sin(i+time*speed[i]*1000),-1,1,0,15);
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    float time = ofGetElapsedTimef();
    float yOsc = ofMap(sin(time),-1,1,0,50);
    
    for(int i = 1; i < 50; i++){
        ofSetColor(235);
        ofDrawCircle(xPos[i], yPos[i], circlesize[i]);
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
