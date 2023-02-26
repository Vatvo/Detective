/*
Programmer: Jaden Harnar
Program: Location Class
Filename: location_class.h
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>

#include "character_class.h"
#include "clue_class.h"

using namespace std;

class location_class {

    private:
        string location_name; //The name of the location
        string location_description; //Description of the location
        character_class assigned_character; //The character assigned to this location

    public:
        void set_location_name(string);
        void set_location_description(string);
        void set_assigned_character(character_class); //Sets assigned_character using a character_class object
        const character_class get_assigned_character(); //Returns the assigned_character
        const string get_location_name(); //Returns the location_name
        const string get_location_description(); //Returns the location_description

        location_class(); //Default Constructor
        location_class(string, character_class); //Constructor with specified filename
};

void location_class :: set_location_name(string input_name) {

    location_name = input_name;
}

void location_class :: set_location_description(string input_description) {

    location_description = input_description;
}

void location_class :: set_assigned_character(character_class input_character) {

    assigned_character = input_character;
}

const character_class location_class :: get_assigned_character() {

    return assigned_character;
}

const string location_class :: get_location_name() {

    return location_name;
}

const string location_class :: get_location_description() {

    return location_description;
}

location_class :: location_class() {

    set_location_name("No Location Name");
    set_location_description("No Location Description");
}

location_class :: location_class(string filepath, character_class input_character) {

    ifstream location_file(filepath);
    string data_storage[2];

    int i = 0;
    string input_text;
    while(getline(location_file, input_text)) {
        data_storage[i] = input_text;
        i++;
    }

    location_name = data_storage[0];
    location_description = data_storage[1];
}