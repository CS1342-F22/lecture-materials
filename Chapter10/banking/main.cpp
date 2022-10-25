#include <iostream>
#include <iomanip>
#include "User.h"
#include "Bank.h"

using namespace std;

// This is a global function
void display() {
    cout << "test";
}

int main() {
    Bank bank;

    cout << bank.getName() << endl;


    return 0;
}
