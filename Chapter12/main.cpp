#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    std::cout << "Hello, World!" << std::endl;
    LinkedList list; // default

    list.append(1);
    list.append(2);
    list.append(3);

    list.remove();

    list.display();
    cout << endl;

    list.reverseDisplay();

    return 0;
}
