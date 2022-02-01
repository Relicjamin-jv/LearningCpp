#include <iostream>

/**
 * For a func. to be constexpr it must be simple and only use information passed to it, it can not modify non local variables, but it
 * can have it's own variables. constexpr are used when immunitbiliy and performance is needed, or it's needed for a lang rule.
 * 
 */


constexpr int evalAtCompileTime = 50; //looked at when compiling, puts in readonly memory. Faster. Safer.
const double constVar = 5.4; //it wont change, therefore can use pointers and references without fear of it being changed.


/**
 * @brief return the square of x
 * 
 * @param x what is going to be doubled 
 * @return constexpr double 
 */
constexpr double square(double x){
    return x*x;
}


int main(){
    double var = 7.5;
    constexpr double max1 = 1.4*square(7); //OK
    //constexpr double max2 = 1.4*square(var); //error: var isnt a const exp., therefore cant be used as data, cause it isn't there
    const double max3 = 1.4*square(var); //OK, evaled at runtime

    std::cout << "Compiled with no errors, look at file for more information" << std::endl;
}