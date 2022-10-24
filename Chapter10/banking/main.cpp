#include <iostream>
#include "User.h"

using namespace std;

// This is a global function
void display() {
    cout << "test";
}

int main() {
    User user; // default constructor
    User user1(1, "Erik Gabrielsen", "123 Caruth");

//    int id = 10;
//    user.setId(id);
//    user.setName("Erik Gabrielsen");

    user1.display();

//    user.id = 10; // -1
//    user.name = "Erik Gabrielsen";
//    user.address = "1234 Caruth Lane";
//    user.balance = 1000000;
//
//    cout << user.id << endl;


    return 0;
}
