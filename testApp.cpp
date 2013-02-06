#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            players[i][j].loadMovie("swingGirlAll.mov");
            players[i][j].setLoopState(OF_LOOP_NORMAL);
        }
    }

}

//--------------------------------------------------------------
void testApp::update(){
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            players[i][j].setFrame(mouseX); //scrubber
            players[i][j].update();
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    //draws 4 videos, each facing a different direction
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            players[i][j].draw(i*960, j*540, powf(-1, i)*480, powf(-1, j)*270);
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}