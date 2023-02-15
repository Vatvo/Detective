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
        int location_count; //The number of active locations

        location_class *current_location; //The ID of the currently occupied location
        location_class active_locations[100]; //Every location currently loaded in the game
    
    public:
        void set_location_count(int count); //Set the number of locations
        void generate_locations(); //Generates a list of active locations
        void switch_location(int new_location); //Switches current_location to new_location
        void print_location(); //Prints the location_name of current_location
        void list_locations(); //prints the location_name of every active location

        detective_library(); //Default Constructor
        detective_library(int count); //Constructor with specified location_count
        ~detective_library(); //Destructor
};

detective_library :: detective_library() {
    location_count = 0;
    current_location = active_locations;
}

detective_library :: detective_library(int count) {
    location_count = count;
    current_location = active_locations;
}

void detective_library :: set_location_count(int count) {

}

void detective_library :: generate_locations() {

}

void detective_library :: switch_location(int new_location) {

}

void detective_library :: print_location() {

}