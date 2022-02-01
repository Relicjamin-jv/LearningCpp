#include <iostream>
using namespace std;

/**
 * @brief Makes an obeject vector that takes an 's' size
 * 
 */
class Vector
{
public:
    Vector(int s) : elem{new double[s]}, sz{s} {} //Constructor, takes in s for size, then it inits elem with 's' pointers and set the size to sz
    double &operator[](int i);                  // element access: subscripting, returns a referene to the appropriate element, [] indicates a array op. but could be any op.
    int size() { return sz; }                     //size functon is made to return the size of the array

private:
    double *elem; // pointer to the elements
    int sz;       // the number of elements
};

/** 
 * Throws an exception whenever the index being called is not valid
 */
double &Vector::operator[](int i)
{
    if(i<0 || size() <= i) throw out_of_range("Vector::operator[]");
    else return elem[i];
}


int main(){
    Vector v(2);

    try{
        v[5] = 1.2; //calls a index out of bounds 
    }catch (out_of_range& oor){
        cerr << "error out of bounds: " << oor.what() << "\n";
    }
}