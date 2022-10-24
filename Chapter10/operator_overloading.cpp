#include <iostream>
#include <iomanip>

using namespace std;

class Bucket
{
public:
    Bucket();
    Bucket(double quantity);

    void setQuantity(double x);
    double getQuantity() const;
    void Print() const;

    bool operator<(const Bucket &b2) { return quantity < b2.quantity; }
    bool operator>(const Bucket &b2) { return quantity > b2.quantity; }
    bool operator==(const Bucket &b2) { return quantity == b2.quantity; }
    Bucket operator+(const Bucket &b)
    {
        Bucket tempBucket;
        tempBucket.setQuantity(quantity + b.getQuantity());
        return tempBucket;
    }

private:
    double quantity = 0;
};

Bucket::Bucket() { quantity = 0; }

Bucket::Bucket(double q) { quantity = q; }

void Bucket::setQuantity(double x) { this->quantity = x; }

double Bucket::getQuantity() const { return quantity; }

void Bucket::Print() const
{
    cout << fixed << setprecision(2);
    cout << "Bucket with quantity = " << getQuantity() << endl;
}

int main()
{
    double x, y;
    cout << "Enter ounces in Bucket 1: ";
    cin >> x;
    cout << "Enterounces in Bucket 2: ";
    cin >> y;

    Bucket b1(x);
    b1.Print();

    Bucket b2(y);
    b2.Print();

    cout << boolalpha; // sets manipulator for printing bool values as string
    cout << "Bucket 1 == Bucket 2? " << (b1 == b2) << endl;
    cout << "Bucket 1 >  Bucket 2? " << (b1 > b2) << endl;
    cout << "Bucket 1 <  Bucket 2? " << (b1 < b2) << endl;

    b1 = b1 + b2;
    cout << "Added bucket 2 to Bucket 1" << endl;

    b1.Print();
}