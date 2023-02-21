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
        string description; //Description of the location

        character_class* assigned_character; //The character assigned to this location

    public:
        void set_name(string);
        void set_description(string);
        void set_character(character_class&); //Sets assigned_character using a character_class object

        const character_class get_character(); //Returns the assigned_character

        location_class(); //Default Constructor
        location_class(string, character_class&); //Constructor with specified filename
        ~location_class(); //Destructor

};

location_class :: location_class() {
    assigned_character = nullptr;
    description = "";
}

location_class :: location_class(string filename, character_class &character) {
    
    ifstream location_file(filename);

    string data_storage[2];

    int i = 0;
    string input_text;
    while (getline(location_file, input_text)) {
        data_storage[i] = input_text;
        i++;
    }

    location_file.close();

    set_name(data_storage[0]);
    set_description(data_storage[1]);
    set_character(character);
}

void location_class :: set_name(string name) {
    location_name = name;
}

void location_class :: set_description(string describe) {
    description = describe;
}
void location_class :: set_character(character_class& set_char) {
    assigned_character = &set_char;
}

const character_class location_class :: get_character() {
    return *assigned_character;
}