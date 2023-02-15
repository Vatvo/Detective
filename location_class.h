/*
Programmer: Jaden Harnar
Program: Location Class
Filename: location_class.h
*/

#pragma once

#include <iostream>
#include <string>

#include "character_class.h"
#include "clue_class.h"

using namespace std;

class location_class {
    private:
        string location_name; //The name of the location
        bool contains_clue; //Whether the location contains a clue
        character_class assigned_character; //The character assigned to this location

    public:
        const location_class& operator= (const location_class&); //Override assignment operator
        void set_character(character_class); //Sets assigned_character using a character_class object
        void set_character(string); //Sets the assigned_character using a file
        character_class get_character();

        location_class(); //Default Constructor
        location_class(string filename); //Constructor with specified filename
        ~location_class(); //Destructor

};

location_class :: location_class() {

}

location_class :: location_class(string filename) {

}

const location_class& location_class :: operator= (const location_class& other_location) {

}