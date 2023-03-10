/*
Programmer: Jaden Harnar
Program: Dialogue Class
Filename: : dialogue_class.h
*/

#pragma once

#include <string>

using namespace std;

struct dialogue_path {

    int id; //The ID of a dialogue option
    string trigger; //The command used to trigger the dialogue option
};

class dialogue_class {

    private:
        string dialogue_text; //The text of the dialogue
        dialogue_path paths[10]; //List of dialogue options that can be triggered from the current one

    public:
        void set_dialogue_text(string); //Sets the dialogue_text
        void set_dialogue_paths(dialogue_path[10]); //Sets the list of linked dialogue options
        const string get_dialogue_text(); //Returns the dialogue_text
        const dialogue_path* get_dialogue_paths(); //Returns a list of all linked dialogue options

        dialogue_class(); //Default constructor
        dialogue_class(string, dialogue_path[]); //Constructor with specified dialogue_text and dialogue_paths
};

void dialogue_class :: set_dialogue_text(string input_text) {

    dialogue_text = input_text;
}

void dialogue_class :: set_dialogue_paths(dialogue_path input_paths[10]) {

    for (int i = 0; i < 10; i++)
        paths[i] = input_paths[i];
}

const string dialogue_class :: get_dialogue_text() {

    return dialogue_text;
}

const dialogue_path* dialogue_class :: get_dialogue_paths() {

    return paths;
}

dialogue_class :: dialogue_class() {

    set_dialogue_text("No Dialogue Text");

    for (int i = 0; i < 10; i++) {
        paths[i].id = -1;
        paths[i].trigger = "No Dialogue Trigger";
    }
}

dialogue_class :: dialogue_class(string input_text, dialogue_path input_paths[]) {

    set_dialogue_text(input_text);
    set_dialogue_paths(input_paths);
}