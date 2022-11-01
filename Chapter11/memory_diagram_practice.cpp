#include <iostream>

using namespace std;

void foo(int *a, int &b)
{
    b = 5;
    a[0] = b + 1;
    a[1] = *a + 1;
    a = new int[3];

    // Stop Drawing Diagram Here

    delete[] a;
    a = nullptr;
}

int main()
{
    int v = 3;
    int *p = new int[2];
    int *z = p;
    int data[v] = {3, 4, 5};
    foo(z, v);

    int *ptr = new int;

    delete ptr;
    delete[] p;
    ptr = nullptr;
    p = nullptr;

    int *tempPtr;

    for (int i = 0; i < 100; i++)
    {
        tempPtr = new int(i);

        delete tempPtr; // 99
    }

    return 0;
}