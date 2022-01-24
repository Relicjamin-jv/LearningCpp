#include <iostream>

/**
 * To name a deconsturctor use the "~" oporator followed by the name of the 
 * class, a container is anything that holds mutiple elements.
 */

class Vector
{
private:
    double* elem; // elem points to an array of sz doubles
    int sz;

public:
    Vector(int s) : elem{new double[s]}, sz{s} // constructor: acquire resources
    {
        for (int i = 0; i != s; ++i)
            elem[i] = 0; // initialize elements
    }

    ~Vector() { delete[] elem; } // destructor: release resources, automatially does the cleanup
    double &operator[](int i);
    int size() const;
};

void fct(int n){
    Vector v(n);
    Vector v1(2*n);

    std::cout << "Freeing memory" << "\n";
}

int main(){
    fct(5);
}

