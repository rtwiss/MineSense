/*
 * Main.cpp
 *
 *  Created on: Apr 10, 2014
 *      Author: Rachel T
 */

#include <iostream>
#include "Sensor.h"
#include "Motor.h"
#include "Latch.h"
using namespace std;

int main(){

	int data[] = {100, 101, 105, 110, 210, 100, 102, 110, 150, 100};
	CSensor sensor;
	CMotor motor;
	CLatch latch;

	bool result = sensor.Calibrate();
	if (!result){
		cout << "Sensor could not be calibrated" << endl;
	}

	sensor.ReadData(data);

	// calculate the new position of the motor
	int newPos;
	int sum(0);
	for (int i=0; i < sensor.getData().size(); i++){
		sum = sum + sensor.getData().at(i);
	}
	newPos = sum / 10;

	if (!latch.getState()){
		motor.MoveMotor(newPos);
		cout << "Door closed, motor moved to position: "<< motor.getPos() << endl;
	}
	else {
		motor.ResetMotor();
		cout << "Door open, motor reset to position: "<< motor.getPos() << endl;
	}



}


