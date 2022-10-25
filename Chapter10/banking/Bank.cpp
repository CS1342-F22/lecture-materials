//
// Created by Erik Gabrielsen on 10/24/22.
//

#include "Bank.h"

Bank::Bank() {
    fstream file("../bank.txt");

    getline(file, name);

    string userLine;
    while (getline(file, userLine)) {
        // Creating a user object
        istringstream userSS(userLine);

        string id, name, address, balance;

        getline(userSS, id, ',');
        getline(userSS, name, ',');
        getline(userSS, address, ',');
        getline(userSS, balance);

        User newUser = User(stoi(id), name, address);
        newUser.setBalance(stof(balance));

        users.push_back(newUser);
    }

    file.close();
}

string Bank::getName() const {
    return name;
}