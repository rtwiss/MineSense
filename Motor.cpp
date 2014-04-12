/*
 * Motor.cpp
 *
 *  Created on: Apr 11, 2014
 *      Author: Rachel T
 */

#include "Motor.h"

CMotor::CMotor() : curr_pos(0) {}

void CMotor::ResetMotor(){
	curr_pos = 0;
}
void CMotor::MoveMotor(int distance){
	curr_pos = distance;
}
int CMotor::getPos(){
	return curr_pos;
}





