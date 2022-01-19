#include "Vector.h"

Vector::Vector(int s):elem{new double[s]}, sz{s}{}

double& Vector::operator[](int i) { return elem[i]; }

int Vector::size(){ return sz; }

/*
    Both user.cpp and Vector.cpp both pull from "Vector.h", however 
    both interfaces are independent of each other. This caused for effective
    seperate compilation 
*/

int main(){ 
    Vector v(2);
    v[0] = 1.234;
    v[1] = 2.3;
}