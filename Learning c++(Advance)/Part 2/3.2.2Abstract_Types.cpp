#include <iostream>

/**
 * @brief Makes an obeject vector that takes an 's' size
 * 
 */
class Vector
{
public:
    Vector(int s) : elem{new double[s]}, sz{s} {} //Constructor, takes in s for size, then it inits elem with 's' pointers and set the size to sz
    Vector(std::initializer_list<double> list) : elem{new double[list.size()]}, sz{list.size()}
    {
        std::copy(list.begin(), list.end(), elem);
    }
    double &operator[](int i) { return elem[i]; } // element access: subscripting, returns a referene to the appropriate element, [] indicates a array op. but could be any op.
    int size() const { return sz; }               //size functon is made to return the size of the array

private:
    double *elem; // pointer to the elements
    int sz;       // the number of elements
};

/**
 * @brief Abstract types are completely removed from the user 
 * removes the user from knowing the implemetation of the structure
 * 
 */

/**
 * @brief Virtual means that it may be refined later in class derived from this one
 * With abstract classes it common to not have a constuctor, however it's common to have a deconstructor
 */
class Container
{
public:
    virtual double &operator[](int) = 0; //say this is "pure" virtual means it must define the funciton
    virtual int size() const = 0;        //same thing ^
    virtual ~Container() {}
};

/**
 * @brief Uses the container interface. This knowing nothing of how the container interface
 * works.
 * 
 * @param c container interface 
 */
void use(Container &c)
{
    const int sz = c.size();

    for (int i = 0; i != sz; i++)
    {
        std::cout << c[i] << "\n";
    }
}

class Vector_container : public Container
{
    Vector v;
public:
    Vector_container(int s) : v(s) {} //overrides
    ~Vector_container() {}            //overrides the deconstructor

    double &operator[](int i) { return v[i]; } //overrides
    int size() const { return v.size(); }
};

void g()
{
   Vector_container vc(2);
   vc[0] = 5.4;
   vc[1] = 3.2;
   use(vc);
}

int main(){
    g();
}