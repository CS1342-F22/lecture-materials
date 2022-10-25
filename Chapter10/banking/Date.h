//
// Created by Erik Gabrielsen on 10/24/22.
//

#ifndef BANKING_DATE_H
#define BANKING_DATE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Date {
public:
    Date(); // default
    Date(int mm, int dd, int yy);

    void display();

private:

    int month;
    int day;
    int year;
};


#endif //BANKING_DATE_H
