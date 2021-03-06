/*
 *  vehicle.cpp
 *  BoE
 *
 *  Created by Celtic Minstrel on 20/04/09.
 *
 */

#include <string>
#include <vector>
#include <map>
#include <sstream>


#include "classes.h"
#include "oldstructs.h"

cVehicle::cVehicle() :
	//loc(0,0),
	//loc_in_sec(0,0),
	//sector(0,0),
	which_town(-1),
	exists(false),
	property(false) {
	// do nothing
		loc.x = 0; loc.y = 0;
		loc_in_sec.x = 0; loc_in_sec.y = 0;
		sector.x = 0; sector.y = 0;
}

cVehicle& cVehicle::operator = (legacy::horse_record_type& old){
	which_town = old.which_town;
	exists = old.exists;
	property = old.property;
	loc.x = old.horse_loc.x;
	loc.y = old.horse_loc.y;
	loc_in_sec.x = old.horse_loc_in_sec.x;
	loc_in_sec.y = old.horse_loc_in_sec.y;
	sector.x = old.horse_sector.x;
	sector.y = old.horse_sector.y;
	return *this;
}

cVehicle& cVehicle::operator = (legacy::boat_record_type& old){
	which_town = old.which_town;
	exists = old.exists;
	property = old.property;
	loc.x = old.boat_loc.x;
	loc.y = old.boat_loc.y;
	loc_in_sec.x = old.boat_loc_in_sec.x;
	loc_in_sec.y = old.boat_loc_in_sec.y;
	sector.x = old.boat_sector.x;
	sector.y = old.boat_sector.y;
	return *this;
}
