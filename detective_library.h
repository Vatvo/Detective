/*
Programmer: Jaden Harnar
Program: Detective Library
Filename: detective_library.h
*/

#pragma once

#include <iostream>

#include "location_class.h"
//#include "character_class.h"
//#include "player_class.h"
//#include "clue_class.h"

using namespace std;

class detective_library {
    private:
        int location_count = 2; //The number of active locations
        int current_location; //The ID of the currently occupied location
        location_class active_locations[100]; //Every location currently loaded in the game
        

        void load_map(int count); //Loads a map with count number of locations
    
    public:
        void switch_location(int new_location); //Switches current_location to new_location
        void print_location(); //Prints the value of current_location
};
