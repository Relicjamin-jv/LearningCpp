#include <iostream>
using namespace std;

/**
 * @brief class Invariants are what are assumed to be true about the class
 * With exception handling we can make sure that the class implemetation
 * is used the way it was meant to be used
 */

class Vector
{
public:
    Vector(int s);
    double &operator[](int i);
    int size();

private:
    double *elem;
    int sz;
};

Vector::Vector(int s)
{
    if (s < 0)
    {
        throw length_error("Vector can't be negative");
    }
    elem = new double[s];
    sz = s;
}

double &Vector::operator[](int i) { return elem[i]; } //memeber function for returning the elem at index

int Vector::size() { return sz; } //member function that returns the size of the array

void test()
{
    try
    {
        Vector(-5);
    }
    catch (std::length_error &le)
    {
        cout << le.what();
    }
    catch (std::bad_alloc &ba)
    {
        cout << ba.what();
    }
}

int main()
{
    test();
}