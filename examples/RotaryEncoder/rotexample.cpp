#include "rotexample.h"
#include "rotaryencoder.hpp"

// compile and run the app:
// - - - - - - - - - - - - -
// cd WiringPi/examples/RotaryEncoder/
// make rotexample
// sudo ./rotexample

myGeniusApp app;

int main(){
	app.setup();
	usleep(30*1000000); // run for 30 sec
	return 0;
}

//--------------------------------------------------------------
void myGeniusApp::setup(){
	
	// start wiringPi
	if( wiringPiSetup() == -1 ) std::cout << "SETUP FAILED !!!!" << std::endl;

	// setup 1 encoder on GPIO pins 4 and 5
	encoders.resize(1);
	encoders[0].setup(4, 5, this, &myGeniusApp::re_4_5);
	
}

// ROTARY ENCODER CUSTOM FUNCTIONS
void myGeniusApp::re_4_5(int way, long total){
	// note: if way is reversed, invert pin A and B, or use (way = !way;)
	printf("Rotary encoder just turned (%i)\t Total = %ld \n", way, total);
}
