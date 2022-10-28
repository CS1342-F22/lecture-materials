#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a; // int = int
    *a = *b;
    *b = temp;
}

int main()
{
    int *x = new int(10);
    int *y = new int(20);

    // Implement a swap by pointer
    swap(x, y);

    return 0;
}