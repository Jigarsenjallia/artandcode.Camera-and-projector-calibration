#pragma once

#include "ofMain.h"
#include "ofxDepthRGBAlignment.h"
#include "ofxKinect.h"
#include "ofxCvCheckerboardPreview.h"

using namespace ofxCv;
using namespace cv;

class testApp : public ofBaseApp{

  public:
	void setup();
	void update();
	void draw();

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxCvCheckerboardPreview kinectCheckerPreview;
	ofxCvCheckerboardPreview rgbCheckerPreview;
	ofxDepthRGBAlignment depthRGBAlignment;		
	ofImage grayCopy;
	ofVideoGrabber rgbcamera;
	ofxKinect kinect;
	
};
