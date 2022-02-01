#include <iostream>
#include <cmath>

/**
 * Interfaces help in discerning the difference between the different parts such as functions and classes. The best way to clearly define
 * these parts is clearly define the interaction between all of them
 * 
 */

double sqrtLocal(double);

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

//the functions for vector are elsewhere defined, also sqrtLocal is declared above however is defined below

double sqrtLocal(double d)
{
    return sqrt(d); //calls the math header, but can be replaced with code to sqrt
}

Vector::Vector(int s) : elem{new double[s]}, sz{s} {} //member function of Vector that init the vector, starts the elem pointer at the first index [0] of the double array

double &Vector::operator[](int i) { return elem[i]; } //memeber function for returning the elem at index

int Vector::size() { return sz; } //member function that returns the size of the array

int main()
{
    Vector v(6); //makes a vector object
    v.size();    //returns the size of the vector
    v[1] = 2.3;  //uses operatior fucntion to set index 1 to 2.3

    std::cout << "Defining member functions elsewhere \n";
    std::cout << "Using the object vector at index 1 is the double: " << v[1] << "\n";
}