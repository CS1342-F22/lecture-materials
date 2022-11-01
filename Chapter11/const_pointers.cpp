#include <iostream>

using namespace std;

int main()
{
    // non-const pointer to non-const value
    int value = 10;
    int value2 = 20;
    int *ptr = &value;

    *ptr = 20;
    ptr = &value2; // int * = int *

    // const pointer to a non-const value
    int *const ptr2 = &value;
    *ptr2 = 20;
    ptr2 = &value2; // NOT ALLOWED

    // non-const pointer to a const value
    const double value3 = 10;
    const double value4 = 20;
    const double *ptr3 = &value3;
    *ptr3 = 80; // NOT ALLOWED
    ptr3 = &value4;

    // const pointer to a const value
    const int value5 = 50;
    const int *const ptr5 = &value5;
    *ptr5 = 10;     // NOT ALLOWED
    ptr5 = &value3; // NOT ALLOWED

    return 0;
}