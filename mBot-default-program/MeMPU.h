#ifndef MEMPU_H_
#define MEMPU_H_
#include "MePort.h"
///@brief Class for Ultrasonic Sensor Module
class MeMPU: public MePort
{
	public:
		MeMPU();
	    MeMPU(MEPORT port);
	    double heading();
	private:
		uint8_t _pin;
};
#endif