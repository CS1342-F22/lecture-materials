#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    istringstream inSS("12345");
    ostringstream oSS;

    // convert to integer
    int number;
    inSS >> number;

    // convert to a string
    oSS << number << 100;
    string example = oSS.str();

    cout << "Number: " << number << endl;
    return 0;
}