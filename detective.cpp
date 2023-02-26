/*
Programmer: Jaden Harnar
Program: Detective Game
Filename: detective.cpp
*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

#include "location_class.h"

using namespace std;

void generate_locations(location_class[]);

int main() {

    clue_class clue("Clues/testClue.txt");
    character_class character("Characters/testCharacter.txt");
    location_class location("Locations/testLocation.txt", character);

    return 0;
}

void generate_locations(location_class list[]) {

    string filepath = "./Locations";
    
    int i = 0;
    for (const auto & entry : std :: filesystem :: directory_iterator(filepath)) {
        cout << entry.path() << endl;
    }

}