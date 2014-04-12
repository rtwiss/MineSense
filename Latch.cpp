/*
 * Latch.cpp
 *
 *  Created on: Apr 11, 2014
 *      Author: Rachel T
 */

#include "Latch.h"

CLatch::CLatch() : open(false) {}

bool CLatch::getState(){
	return open;
}
