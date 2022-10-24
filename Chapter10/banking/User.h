//
// Created by Erik Gabrielsen on 10/19/22.
//

#ifndef BANKING_USER_H
#define BANKING_USER_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class User {
public:
    // constructors
    User(); // default constructor - no args
    User(int id, string name, string address); // overloaded constructor

    // getters & setters
    int getId() const;
    void setId(int id);

    string getName() const;
    void setName(string name);

    // utilities
    void display();

private:
    int id;
    string name;
    string address;
    double balance;

};

#endif //BANKING_USER_H
