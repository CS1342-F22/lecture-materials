//
// Created by Erik Gabrielsen on 10/19/22.
//

#include "User.h"

User::User(): id{0}, name{"New User"}, address{"None"}, balance{0} {
    cout << "Default Constructor" << endl;
}

// :: - Scope Resolution Operator
void User::display() {
    cout << "User Information" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Name: " << getName() << endl;
    cout << "Address: " << address << endl;
    cout << "Balance: " << balance << endl;
}

int User::getId() const {
    return this->id;
}

void User::setId(int id) {
    this->id = id;
}

string User::getName() const {
    return this->name;
}

void User::setName(string name) {
    this->name = name;
}

User::User(int id, string name, string address) {
    cout << "Overloaded Constructor" << endl;
    this->id = id;
    this->name = name;
    this->address = address;

    this->balance = 0;
}