#include <iostream>
#include <string>

using namespace std;

// dangling pointer
int *myFunction()
{
    int value = 10;
    int *ptr = &value;

    return ptr;
}

void increment(int *&ptr)
{
    (*ptr)++;
}

int main()
{
    /**
     * Basic use of Pointers
     */
    int *ptr = myFunction();

    cout << *ptr; // seg fault;
    int value = 10;

    ptr = &value;

    cout << "Memory Address of ptr: " << &ptr << endl; //
    cout << "Memory Address of value: " << ptr << endl;
    cout << "Memory Address of value: " << &value << endl;

    increment(ptr);

    cout << "Value: " << value << endl;
    cout << "Value: " << *ptr << endl;

    int **ptr2 = &ptr;

    cout << "Value: " << **ptr2 << endl;

    /**
     * Use of nullptr
     */
    int *ptr = nullptr;

    if (ptr != nullptr)
    {
        *ptr;
    }

    /**
     * @brief new keyword
     * dynamic memory allocation
     */

    int *ptr3 = new int(-1); // pointee is unknown
    int *ptr4 = new int(0);  // pointee is 0

    string *ptrStr = new string("Hello");

    int *example = new int(10);
    increment(example);

    int x[] = {1, 2, 3, 4};

    cout << x;

    return 0;
}
