/*
 * Sensor.cpp
 *
 *  Created on: Apr 10, 2014
 *      Author: Rachel T
 */
#include "Sensor.h"

CSensor::CSensor(){
	data_read.assign(10,0);
}
bool CSensor::Calibrate(){

	/* knowing the details of the sensor,
	   implement calibration of sensor here
	*/

	bool result = true;
	return result;
}
void CSensor::ReadData(int data[]){

	for (int i=0;i<10;i++){
		data_read.push_back(data[i]);
	}
}
vector<int> CSensor::getData(){
	return data_read;
}





