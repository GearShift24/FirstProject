//
//  FirstController.cpp
//  FirstProject
//
//  Created by Wrigley, Joseph on 1/23/17.
//  Copyright © 2017 CTEC. All rights reserved.
//
#include <iostream>
#include "FirstController.h"


using namespace std;

void FirstController :: start()
{
    cout << "i want to die" << endl;
    int myAge = 16;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "How old are you?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "oh, so you are " << yourAge << " years old ( ͡° ͜ʖ ͡°) " << endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline(cin, myName);
    cout << "your name is: " << myName <<  "." << endl;
    cout << "Type in your name and age" << endl;
    cin >> myName >> yourAge;
    cout << "you typed: " << myName << " and " << yourAge << endl;
    
    
}
