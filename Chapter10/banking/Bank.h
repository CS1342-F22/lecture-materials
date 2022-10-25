//
// Created by Erik Gabrielsen on 10/24/22.
//

#ifndef BANKING_BANK_H
#define BANKING_BANK_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "User.h"

using namespace std;

class Bank {
public:
    Bank(); // initialize the current state of my bank from file

    string getName() const;

private:
    string name;
    vector<User> users;

};


#endif //BANKING_BANK_H
