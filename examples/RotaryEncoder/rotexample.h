#pragma once

#include <iostream>
#include <vector>
#include <unistd.h>
#include "wiringPi.h"
#include "rotaryencoder.hpp"

int main();

class myGeniusApp {
	public:
		void setup();
		
		std::vector<re_decoder<myGeniusApp> > encoders;
		void re_4_5(int way, long total);
};

