#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//main background ofPlanePrimitive
	plane.set(ofGetWidth(), ofGetHeight());  
	plane.setPosition(ofGetWidth()/2, ofGetHeight()/2, 0);
	
	//NPC ofPlanePrimitive
	planeNPC.set(200, 200);
	planeNPC.setPosition(ofGetWidth() / 4 * 3, ofGetHeight() / 2, 0);
	
	//Player ofPlanePrimitive
	x = ofGetWidth() / 4;
	y = ofGetHeight() / 2;
	planePlayer.set(200, 200);
	planePlayer.setPosition(x, y, 0);
}

//--------------------------------------------------------------
void ofApp::update(){
}
//--------------------------------------------------------------
void ofApp::draw(){

  //initial background plane
	ofSetColor(255, 165, 0);
	plane.draw();

	//non-player char / NPC
	ofSetColor(65, 105, 225);
	planeNPC.draw();

	//player char
	ofSetColor(255, 20, 147);
	planePlayer.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	//ascii: w = 119, s = 115, a = 97, d = 100
  
	if (key == 119)			//w
	{
		y--;
	}
	else if (key == 115)	//s
	{
		y++;
	}
	else if (key == 97)		//a
	{
		x--;
	}
	else if (key == 100)	//d
	{
		x++;
	}
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
