#include <iostream>

/**
 * @brief simplified version of the std::complex library
 * Note:
 * Example with notes on init
 * class X
{
    int a, b, i, j;
public:
    const int& r;
    X(int i)
      : r(a) // initializes X::r to refer to X::a
      , b{i} // initializes X::b to the value of the parameter i
      , i(i) // initializes X::i to the value of the parameter i
      , j(this->i) // initializes X::j to the value of X::i
    {}
};    
 */
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

int main()
{
    complex a {5.4};
    complex b {2.4};
    complex c {a+=b}; 

    std::cout << "The complex c is: " << c.real() << ", " << c.imag() << "\n";
}