//
//  Rider.hpp
//  Elevators.2
//
//  Created by Shawn Yang on 4/4/21.
//

#include "Building.h"

#ifndef Rider_H
#define Rider_H

#include <string>
using namespace std;

struct Rider
{
	const int from;
	const int to;
	const bool goingUp;
	const bool goingDown;
	
	Rider(const int, const int);
	Rider& operator=(const Rider&);
};

#endif

