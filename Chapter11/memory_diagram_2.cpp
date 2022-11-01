#include <iostream>

using namespace std;

int main()
{
    int *ptrA;
    int *ptrB;
    int data[6] = {12, 10, 8, 6, 4, 2};

    ptrA = (data + 1); // int *
    ptrB = &data[3];

    (*ptrA)++;
    *ptrB = *ptrA + 2;

    ptrB++; // ptrB = ptrB + 1
    *(data + 4) = *ptrA;
    *ptrA = data[0];

    return 0;
}