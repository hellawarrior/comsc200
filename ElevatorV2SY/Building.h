//
//  Building.hpp
//  Elevators.2
//
//  Created by Shawn Yang on 4/4/21.
//
#ifndef BUILDING_H
#define BUILDING_H

#include "Floor.h"
#include "Elevator.h"

struct Building
{
	static Floor floors[];
	static Elevator elevators[];
	static const int FLOORS;
	static const int ELEVATORS;
	
	static void getDifferentInts(int&, int&);
	static int getPoisson(double);
	static void action(double);
	
	// actions
	static void placeNewRiders(double);
	static bool openDoorToDisembarkRider(int);
	static bool disembarkRider(int);
	static bool boardRider(int);

};
#endif
