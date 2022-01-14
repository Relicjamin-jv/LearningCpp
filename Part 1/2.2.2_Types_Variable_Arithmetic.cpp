//bool- Boolean, possible values are true and false
//char- character, for example, 'a', ' z', and '9'
//int- integer, for example, 1, 42, and 1066
//double- double-precision floating-point number, for example, 3.14 and 299793.0

#include <iostream>
#include <cmath>

void converson_fun(int x, double y)
{
    x = x + y; //truncates to an int, trucate meaning that it goes to a smaller data type
    y = x * y; //assignes the product of y, stays a double

    std::cout << "x(int):" << typeid(x).name() << ", y(double):" << typeid(y).name() << "\n"; //showing that x is still an int and y is still a double although mixing data types
}

int main()
{
    std::cout << sizeof(char) << "\n"; //prints the size of the data type, char is 1 byte, int is 4
    converson_fun(1, 1.2);
    /*
    arithmetic operators can be used on these data types
     x+y plus
     +x unary plus
     x−y minus
     −x unar y minus
     x∗y multiply
     x/y divide
     x%y remainder (modulus) for integers
    */

    /*
   Comarison operators
    x==y // equal
    x!=y // not equal
    x<y // less than
    x>y // greater than
    x<=y // less than or equal
    x>=y // greater than or equal
   */

    /*
    More specifics on c++ modifying syntax
     x+=y // x = x+y
     ++x // increment: x = x+1
     x−=y // x = x-y
     −−x // decrement: x = x-1
     x∗=y // scaling: x = x*y
     x/=y // scaling: x = x/y
     x%=y // x = x%y
    */

    /*
    Dont have the include files but ->
    complex<double> z = 1; // a complex number with double-precision floating-point scalars
    complex<double> z2 {d1,d2};
    complex<double> z3 = {1,2}; // the = is optional with { ... }
    vector<int> v {1,2,3,4,5,6}; // a vector of ints
    */

    int i1 = 7.2; // i1 becomes 7
    //int i2{7.2};    // error : floating-point to integer conversion
    //int i3 = {7.2}; // error : floating-point to integer conversion (the = is redundant)

    std::cout << "i1 = 7.2 -> " << i1 << "\n";

    auto b = true;    // a bool
    auto ch = 'x';    // a char
    auto i = 123;     // an int
    auto d = 1.2;     // a double
    auto z = sqrt(4); // z has the type of whatever sqr t(y) retur ns
    
    std::cout << typeid(b).name() << "<- delcared with an auto data type";
}