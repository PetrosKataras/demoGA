#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetFrameRate(60);
	pop = new Population();
	generation = 0;
}

//--------------------------------------------------------------
void testApp::update(){
	if (ofGetFrameNum() % 10 == 0) {
		pop->evolve();
		generation += 1;
	}     
}

//--------------------------------------------------------------
void testApp::draw(){

	ofBackground(0, 0, 0);
	ofSetColor(255, 0, 0);
	ofFill();
	
	for (int i = 0 ; i < POP_NUM; i++) {
		ofPushMatrix();
		ofScale(.08, .08, .08);
		ofTranslate(ofGetScreenWidth()*(i%10), ofGetScreenHeight()*(i/10));
		ofTranslate(ofGetScreenWidth()/2, ofGetScreenHeight()/2, 0);
		ofRotateY(0.5*ofGetFrameNum());
		pop->m_pop[i].draw();
		ofPopMatrix();
	}	
	
	ofNoFill();
	ofSetColor(255, 255, 255);
	ofDrawBitmapString(" Generation : " + ofToString(generation) , 10, ofGetScreenHeight() - 125);
    ofDrawBitmapString(" Worst Individual (upper_left_corner) Fitness: " +ofToString(pop->m_pop[0].m_fitness), 10, ofGetScreenHeight()-100);
    ofDrawBitmapString(" Best Individual (lower_right_corner) Fitness: " +ofToString(pop->m_pop[POP_NUM-1].m_fitness), 500, ofGetScreenHeight()-100);
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