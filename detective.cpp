/*
Programmer: Jaden Harnar
Program: Detective Game
Filename: detective.cpp
*/

#include <iostream>
#include <fstream>
#include <format>
#include <string>


#include "location_class.h"

using namespace std;

void print_locations();
void get_input();

clue_class clue("Clues/testClue.txt");
character_class character("Characters/testCharacter.txt");
location_class location("Locations/testLocation.txt", character);

bool game_active = true;

int main() {



    cout << "Ah, good to see you, detective. We have a murder case today. Suspect number one is a man by the name of Walter White. Would you please investigate him immediately." << endl;
    cout << "You can go to him simply by saying \"travel\" and then his location." << endl;
    cout << "You can interrogate a suspect by saying \"interrogate\" and then whatever word concerns you." << endl;
    print_locations();

    while (game_active) {
        get_input();

        cout << character.get_current_dialogue_text() << endl;
    }

    return 0;
}

void print_locations() {
    cout << "Availible locations: " << location.get_location_name() << endl;
}

void get_input() {
    cout << "Enter Command: ";

    string command, input;
    cin >> command;
    cin >> input;

    if (command == "travel") {
        cout << location.get_location_description() << endl;
        character.set_current_dialogue(0);

    } else if (command == "interrogate") {

    } else if (command == "fight") {
        cout << "Feature Currently Unavailible" << endl;
        get_input();
    } else {
        cout << "Command Unknown" << endl;
        get_input();
    }

}