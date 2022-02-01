#include <iostream>

class complex
{
    double re, im; //represents two doubles

public:
    complex(double r, double i) : re{r}, im{i} {} //constructor for two scalers
    complex(double r) : re{r}, im{0} {}           //complex for one scaler
    complex() : re{0}, im{0} {}                   //default constructor

    double real() const { return re; } //const doesn't allow the funtion to modify the object within the objects
    void real(double d) { re = d; }    //sets re to the d value specified
    double imag() const { return im; } //const doesn't allow the funtion to modify the object within the obeject
    void imag(double d) { im = d; }    //set im to d

    complex &operator+=(complex z)
    {
        re += z.re, im += z.im;
        return *this;
    }
    complex &operator-=(complex z)
    {
        re -= z.re, im -= z.im;
        return *this;
    }

    complex &operator*=(complex); //defined elsewhere
    complex &operator/=(complex); //defined elsewhere
};

complex operator+(complex a, complex b) { return a += b; }
bool operator==(complex a, complex b)
{
    return a.real() == b.real() && a.imag() == b.imag();
}

/**
 * @brief can copy between user defined type, for example the complex member above
 * The copy happens by memberwise copy: copy each member
 */

void test(complex z1){
    complex z2 {z1}; //copy the complex members
    complex z3;
    z3 = z2;         //copy assignment 
    std::cout << z3.real() << ", " << z2.real() << ": (3.1)";
}

int main(){ 
    complex z1 {3.1};
    test(z1);
}