#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
    A()
    {
        foo = 0;
    }

    A(int x)
    {
        foo = x;
    }

    void setFoo(int x)
    {
        foo = x;
    }

    int getFoo()
    {
        return foo;
    }

    virtual void Print()
    {
        cout << "A with " << foo << endl;
    }

protected:
    int foo;
};

class B : public A
{
public:
    B(int a, int b) : A(a)
    {
        bar = b;
    }

    void Print()
    {
        cout << "B with a: " << foo;
        cout << "   and b: " << bar << endl;
    }

private:
    int bar;
};

int main()
{
    A a(1);
    B b(1, 2);

    a.Print(); // A - Print()
    b.Print(); // B - Print()

    vector<A *> objects;
    objects.push_back(&a);
    objects.push_back(&b);

    objects.at(0)->Print(); // A - Print()
    objects.at(1)->Print(); // A - Print()

    return 0;
}