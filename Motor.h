/*
 * Motor.h
 *
 *  Created on: Apr 11, 2014
 *      Author: Rachel T
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class CMotor{
private:
	int curr_pos;
public:
	CMotor();
	void ResetMotor();  // moves motor to the starting position
	void MoveMotor(int distance); // Moves motor to the measurement position
	int getPos();
};



#endif /* MOTOR_H_ */
