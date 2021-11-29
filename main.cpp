/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Austin Mathew
 */


#include "std_lib_facilities.h"
#include "Name_value.h"

void isNew(string name, Vector<Name_value> persons);

void printPairs(Vector<Name_value> persons);

int main() {
    vector<Name_value> persons;
    //holds final values

    string name;
    int score;
    //temporarily holds values for evaluation

    cout << "Enter names and scores in pairs (e.g. John 12):\n";
    //instructs user
    cin >> name >> score;
    //reads in first pair
    while(name!="NoName" || score != 0){
        //checks for end input conditions
        isNew(name, persons);
        //terminates program with error message if there is a repeat name
        persons.push_back(Name_value(name, score));
        //creates new nameless object of Name_value class which is added to end of the vector
        cin >> name >> score;
        //reads in name and score to be evaluated by while condition and isNew
    }

    printPairs(persons); // prints out list

    return 0;
}

void printPairs(Vector<Name_value> persons) {
    for(int i=0; i<persons.size();i++){//iterates through vector
        cout <<'('<<persons.at(i).getName()<<','<<persons.at(i).getScore()<<")\n";
        //prints out values in required format
    }
}

void isNew(string name, Vector<Name_value> persons) {
    for(int i=0; i<persons.size();i++){//iterates through vector
        if(name == persons.at(i).getName()){//if name matches an existing name
            cout<<"ERROR Repeated Name: " << name << endl;//Error message
            exit(0);//terminate program
        }
    }
}
