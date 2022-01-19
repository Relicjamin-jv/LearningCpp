#include <iostream>

/**
 * @brief Makes an obeject vector that takes an 's' size
 * 
 */
class Vector
{
public:
    Vector(int s) :elem{new double[s]}, sz{s} {} //Constructor, takes in s for size, then it inits elem with 's' pointers and set the size to sz
    double& operator[](int i) { return elem[i]; } // element access: subscripting, returns a referene to the appropriate element, [] indicates a array op. but could be any op.
    int size() { return sz; }  //size functon is made to return the size of the array

private:
    double* elem; // pointer to the elements
    int sz;       // the number of elements
};



int main(){
    Vector v(6); //makes a vector object
    v.size(); //returns the size of the vector
    v[1] = 2.3;

    std::cout << "Using the object vector at index 1 is the double: " << v[1] << "\n";
}