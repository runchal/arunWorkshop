#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //declare time as an avalaible variable
    float time = ofGetElapsedTimef();
    
    //Let's draw a rectangle. first two variable – x and y. Second two – height and width
//    ofDrawRectangle(0,0,100,100);
    
    //Let's center the rectangle. First two variables should use the screen height and width to place it in the center
//    ofDrawRectangle(ofGetWidth()/2-50, ofGetHeight()/2-50, 100, 100);
    
    //ok Let's build a grid of this using nested for loops.
    //first let's take a look at the horizontal row
//    for (int i=0; i < 20; i++){
//        ofDrawRectangle(i*40, 100, 20, 20);
//    }
    
    //Alright, let's see what happens when you take a look at changing the vertical grid
//    for (int i=0; i < 20; i++){
//        ofDrawRectangle(100, i*40, 20, 20);
//    }
    
//    for (int i=0; i < 20; i++){
//        for (int j=0; j < 20; j++){
//            ofDrawRectangle(20+i*40, 20+j*40, 15, 15);
//        }
//    }
    
    //Let's play with time as a building block for creating some compositions. Zach uses sin of elapsed time almost every day. Without changing variables it's a way that you can use a slowly changing sin wave to adjust things. Then he uses it with ofMap to apply it to a range. The first thing we're going to do is count the time.
    
    
//    cout << "The time is " << time << endl;
    
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j < 20; j++){
//            ofDrawRectangle(20+i*30, 20+j*30, time, 10);
//        }
//    }
    
    //for something that produces just between negative 1 and 1
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j < 20; j++){
//            ofDrawRectangle(20+i*30, 20+j*30, sin(time), 10);
//        }
//    }
    
    //Now to use ofMap to make something thicker
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            ofDrawRectangle(20+i*30, 20+j*30, ofMap(sin(time),-1, 1, 3, 20), 10);
//        }
//    }
    
    //this gave a leaning effect. how do we make it feel centered?
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(time),-1, 1, 3, 20);
//            ofDrawRectangle(20+i*30-width/2, 20+j*30, width, 10);
//        }
//    }
    
    //how do we get weird? what about using the cursor position to effect the y variable
//    
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(i*time),-1, 1, 3, 20);
//            float height = ofMap(mouseY,0,ofGetHeight(),1,20);
//            ofDrawRectangle(20+i*30, 20+j*30, width, height);
//        }
//    }
    
    
    //add comments
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(i*time),-1, 1, 3, 20);
//            float height = ofMap(mouseY,0,ofGetHeight(),1,20);
//            float a = ofMap(sin(i),-1, 1, 0, ofGetWidth());
//            ofDrawRectangle(a, 20+j*30, width, height);
//        }
//    }
    
    //ok this is kinda weird but it's starting to get interesting too. so we're gojng to introduce some chaos by looking at the x position. w're using sin of time to mess with that at the moment and it produces a certain result.
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(i),-1, 1, 3, 20);
////            float height = ofMap(mouseY,0,ofGetHeight(),1,20);
//            float a = ofMap(sin(time),-1, 1, 0, ofGetWidth());
//            ofDrawRectangle(a, 20+j*30, width, 15);
//        }
//    }
    //what was happening here? it was creating 20 objects layered on top of each other with the same start position. So we need to give each of them a relatively random starting x position.
    
    
    //what happens when we introduce i into the equation and mess with the x position using i? I also am getting rid of the height float because i think the thing i want to make is going to be fixed there. What happens when you add an integer to the sin function for the a variable
//    for (int i = 0; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(i),-1, 1, 3, 20);
//            float a = ofMap(sin(i+time),-1, 1, 0, ofGetWidth());
//            ofDrawRectangle(a, 20+j*30, width, 15);
//        }
//    }
    
    //so what happened there is we're going to do is multiply
//    for (int i = 1; i < 20; i++){
//        for (int j = 0; j<20; j++){
//            float width = ofMap(sin(i),-1, 1, 3, 20);
//            float a = ofMap(sin(i*time),-1, 1, 0, ofGetWidth());
//            ofDrawRectangle(a, 20+j*30, width, 15);
//        }
//    }
    
    //so one question I had is how you slow things down. multiplying the sin function slows things down a little. 
    for (int i = 1; i < 20; i++){
        for (int j = 0; j<20; j++){
            float width = ofMap(sin(i),-1, 1, 3, 20);
            float a = ofMap(sin(i*time*0.1),-1, 1, 0, ofGetWidth());
            ofDrawRectangle(a, 20+j*30, width, 15);
        }
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
