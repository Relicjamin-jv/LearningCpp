#include <iostream>

/**
 * Cool ways to handle intializing containers, states two ways to accomplish this
 * either with a list or a push_back().
 * 
 */

class Vector
{
public:
    Vector::Vector(std::initializer_list<double> lst) // initialize with a list
        : elem{new double[lst.size()]}, sz{lst.size()}
    {
        std::copy(lst.begin(), lst.end(), elem); // copy from lst into elem
    }
    Vector(int s) : elem{new double[s]}, sz{s} {} //Constructor, takes in s for size, then it inits elem with 's' pointers and set the size to sz
    double &operator[](int i) { return elem[i]; } // element access: subscripting, returns a referene to the appropriate element, [] indicates a array op. but could be any op.
    int size() { return sz; }                     //size functon is made to return the size of the array
    Vector(std::initializer_list<double>);        // initialize with a list
    void push_back(double);                       // add element at end increasing the size by one
private:
    double *elem; // pointer to the elements
    int sz;       // the number of elements
};

/**
 * @brief Read from a file and then add it to the Vector
 * 
 * @param is input stream 
 * @return Vector 
 */
// Vector read(std::istream &is)
// {
//     Vector v(5);
//     for (double d; is >> d;)
//     {
//         v.push_back(d);
//     }
//     return v;
// }