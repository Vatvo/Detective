/*
Programmer: Jaden Harnar
Program: Clue Class
Filename: clue_class.h
*/

#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class clue_class {
    
    private:
        string clue_name;   //The name of the clue
        string clue_description; //The description of the clue

    public:
        void set_name(string); //Set clue_name
        void set_description(string); //Set clue_description

        const string get_name(); //Return clue_name
        const string get_description(); //Return clue_description

        clue_class(); //Default Constructor
        clue_class(string); //Constructor with specified file
        ~clue_class(); //Destructor
};

void clue_class :: set_name(string name) {
    clue_name = name;
}

void clue_class :: set_description(string description) {
    clue_description = description;
}

const string clue_class :: get_name() {
    return clue_name;
}

const string clue_class :: get_description() {
    return clue_description;
}

clue_class :: clue_class() {
    set_name("");
    set_description("");
}

clue_class :: clue_class(string filename) {
    ifstream clue_file(filename);
    string data_storage[2];

    int i = 0;
    string input_text;
    while(getline(clue_file, input_text)) {
        data_storage[i] = input_text;
        i++;
    }

    clue_file.close();

    set_name(data_storage[0]);
    set_description(data_storage[1]);
}