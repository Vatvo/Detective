/*
Programmer: Jaden Harnar
Program: Location Class
Filename: location_class.h
*/

#pragma once

#include <iostream>

#include "character_class.h"
#include "clue_class.h"

using namespace std;

class location_class {
    private:
        string location_name; //The name of the location
        bool contains_clue; //Whether the location contains a clue
        character_class assigned_character; //The character assigned to this location

    public:
        
        location_class(); //Constructor
        ~location_class(); //Destructor


        
};