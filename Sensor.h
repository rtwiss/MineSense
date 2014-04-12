/*
 * Sensor.h
 *
 *  Created on: Apr 10, 2014
 *      Author: Rachel T
 */

#ifndef SENSOR_H_
#define SENSOR_H_

#include <vector>

using namespace std;

class CSensor{
private:
	vector<int> data_read;
public:
	CSensor();
	bool Calibrate();  // calibrates the sensor
	void ReadData(int data[]); // Reads the data from the sensor
	vector<int> getData();
};



#endif /* SENSOR_H_ */
