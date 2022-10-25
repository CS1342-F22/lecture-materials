//
// Created by Erik Gabrielsen on 10/24/22.
//

#include "Date.h"

Date::Date() = default;

Date::Date(int mm, int dd, int yy) {
    month = mm;
    day = dd;
    year = yy;
}

void Date::display() {
    // MM/DD/YY

    cout << setfill('0')
        << setw(2) << month << "/"
        << setw(2) << day << "/"
        << setw(2) << year;

}
