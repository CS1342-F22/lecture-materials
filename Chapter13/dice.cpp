#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using namespace std;

class Die
{
public:
    Die()
    {
        srand(time(NULL));
        value = 0;
    }

    int getValue() { return value; }
    void setValue(int v) { value = v; }
    virtual int roll() = 0; // pure virtual function -> makes class an abstract class.
    void Print()
    {
        cout << value << " ";
    }

    void foo()
    {
        cout << "Base class";
    }

protected:
    int value;
};

class RegularDie : public Die
{
public:
    RegularDie() { value = -2; }
    int roll()
    {
        value = rand() % 6 + 1;
        return value;
    }

    void foo()
    {
        cout << "Derived class";
    }
};

class LoadedDie : public Die
{
public:
    LoadedDie()
    {
        loadedSide = 1;
    }

    LoadedDie(int side)
    {
        loadedSide = side;
    }

    int roll()
    {
        int val = rand() % 2;
        if (val == 1)
        {
            value = rand() % 6 + 1;
        }
        else
        {
            value = loadedSide;
        }
        return value;
    }

private:
    int loadedSide;
};

class Cup
{
public:
    Cup()
    {
        // init to 5 dice
        RegularDie *d1 = new RegularDie();
        RegularDie *d2 = new RegularDie();
        LoadedDie *d3 = new LoadedDie(1);
        LoadedDie *d4 = new LoadedDie(4);
        LoadedDie *d5 = new LoadedDie(6);

        dice.push_back(d1);
        dice.push_back(d2);
        dice.push_back(d3);
        dice.push_back(d4);
        dice.push_back(d5);
    }

    int roll()
    {
        int total = 0;
        for (auto d : dice)
        {
            total += d->roll();
        }

        return total;
    }

    void Print()
    {
        for (auto d : dice)
        {
            d->Print();
        }
        cout << endl;
    }

private:
    vector<Die *> dice;
};

int main()
{
    // Cup *cup = new Cup();

    // for (int i = 0; i < 10; i++)
    // {
    //     cup->roll();
    //     cup->Print();
    // }

    Die *d = new RegularDie();

    d->foo();

    return 0;
}