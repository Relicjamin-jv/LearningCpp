/*
 Book: The c++ programming Language: 4th Edition 
 Tells the compiler to include iostream
*/
#include <iostream>

using namespace std; // this allows the use of the standard lib w/o declaring std everytime

//all executable code is eventually ran by main, whether by direct contact or inderectly contacted by main
//example of functions, need to be declared before main
double square(double x){
    return x*x; 
}

//out the square of x and calls the square function in order to do so
//void indicates the function will have no return value much like other programming langs
void print_square(double x){
    cout << "the square of " << x << " is " << square(x) << "\n"; //no use of std, due to the namespace being used to indicate the standard lib
}


/*
Must have in every c++ program 
returns a value to the system, non zero return mean failure
The operator '<<' is the put to, writes the second argument on to the first
*/
int main(){
    cout << "Hello world\n"; //hello world is written to the output stream std::cout, std indicates that it's part of the standard lib, and cout is to be found in std
    print_square(1.234);  //print_square -> square -> returns to main to execute the rest of the program
}


