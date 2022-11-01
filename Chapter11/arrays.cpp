#include <iostream>

using namespace std;

void printArrayAddresses(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array + i << " ";
    }
    cout << endl;
}

void printArrayRegular(int myArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << (myArray[i]) << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5];     // create an array of length 5
    *arr = 1;       // set the first value in the array to 1
    arr[1] = 2;     // set the second value to 2
    *(arr + 2) = 3; // set the third value to 3
    *(arr + 3) = 4; // set the third value to 3
    *(arr + 4) = 5; // set the third value to 3

    const int SIZE = 5;
    int nums[SIZE];
    printArrayRegular(nums, SIZE);
    printArrayAddresses(nums, SIZE);

    int *nums2 = new int[SIZE];
    printArrayRegular(nums2, SIZE);
    printArrayAddresses(nums2, SIZE);

    return 0;
}