/*
Programmer: Jaden Harnar
Program: Character Class
Filename: character_class.h
*/

#pragma once

#include <fstream>

#include "clue_class.h"
#include "dialogue_class.h"

using namespace std;

class character_class {

    private:
        string character_name;
        dialogue_class dialogue_list[10];
        int current_dialogue;

    public:
        void set_character_name(string); //Sets the character_name
        void set_dialogue_list(dialogue_class[]); //Sets the dialogue_list
        void set_current_dialogue(int); //Sets the current_dialogue
        const string get_character_name(); //Returns the character_name
        const dialogue_class* get_dialogue_list(); //Returns the list of dialogue options
        const int get_current_dialogue_id(); //Returns the integer ID of the current_dialogue
        const string get_current_dialogue_text(); //Returns the text of the current_dialogue

        character_class(); //Default constructor
        character_class(string); //Constructor with specified filename
};

void character_class :: set_character_name(string name) {

    character_name = name;
}

void character_class :: set_dialogue_list(dialogue_class list[]) {

    for (int i = 0; i < 10; i++)
        dialogue_list[i] = list[i];
}

void character_class :: set_current_dialogue(int id) {

    current_dialogue = id;
}

const string character_class :: get_character_name() {

    return character_name;
}

const dialogue_class* character_class :: get_dialogue_list() {

    return dialogue_list;
}

const int character_class :: get_current_dialogue_id() {

    return current_dialogue;
}

const string character_class :: get_current_dialogue_text() {

    return dialogue_list[current_dialogue].get_dialogue_text();
}

character_class :: character_class() {
    set_character_name("No Character Name");
    set_current_dialogue(-1);
}

character_class :: character_class(string filepath) {

    ifstream character_file(filepath);
    string data_storage[30];

    int i = 0;
    string input_text;
    while(getline(character_file, input_text)) {
        data_storage[i] = input_text;
        i++;
    }

    character_file.close();

    set_character_name(data_storage[0]);
    dialogue_class temp_dialogue;

    for(int i = 1; i < 30; )
}