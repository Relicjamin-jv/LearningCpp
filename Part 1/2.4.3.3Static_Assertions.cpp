#include <iostream>
using namespace std;

/**
 * @brief Static assertions are errors checked at compile time instead 
 * of error being found at runtime
 * 
 */

constexpr double C = 20; // km/s

void f(double speed)
{
    constexpr double local_max = 160;           //160 km/h == 160.0/(60*60) km/s
    //static_assert(speed < C, "can't go that fast");     // error : speed must be a constant
    static_assert(local_max < C, "can't go that fast"); // OK
}

int main(){
    f(5000);
}