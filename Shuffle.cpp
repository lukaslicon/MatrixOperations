/*********************************************************************************
* Lukas Licon, llicon
* 2023 Winter CSE101 PA#5
* Shuffle.cpp
* 02/22/2023
* Implementation and Executable file for Shuffling List ADT
*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <fstream>
#include <string>
#include "List.h"

using namespace std;

void shuffle(List& deck) {
    List list1;
    List list2;
    deck.moveFront();
    for (int x = 0; x < deck.length() / 2; x++) {
        list1.insertBefore(deck.peekNext());
        deck.moveNext();
    }
    for (int y = deck.length() / 2; y < deck.length(); y++) {
        list2.insertBefore(deck.peekNext());
        deck.moveNext();
    }
    deck.clear();
    list1.moveFront();
    list2.moveFront();
    while (list1.position() != list1.length() || list2.position() != list2.length()) {
        if (list2.position() != list2.length()) {
            deck.insertBefore(list2.peekNext());
            list2.moveNext();
        }
        if (list1.position() != list1.length()) {
            deck.insertBefore(list1.peekNext());
            list1.moveNext();
        }
    }
}

int main(int argc, char* argv[]){
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <number>" << endl;
        return (EXIT_FAILURE);
    }
    int numOfDeck = atoi(argv[1]);
    List list1, list2;
    cout << "deck size       shuffle count" << endl;
    cout << "------------------------------" << endl;
    int shufl = 0;
    int x = 0;
    int y = 0;
    while (x < numOfDeck) {
        shufl = 0;
        while (y < (x + 1)) {
            list1.insertBefore(y);
            list2.insertBefore(y);
            y++;
        }
        shuffle(list1);
        shufl++;
        while (!(list1.equals(list2))) {
            shuffle(list1);
            shufl++;
        }
        cout << " " << x + 1 << "               " << shufl << endl;
        list1.clear();
        list2.clear();
        y = 0;
        x++;
    }
    return (0);
}
