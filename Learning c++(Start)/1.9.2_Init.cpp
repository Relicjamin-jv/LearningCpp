#include <iostream>


int main(){
    //seeing how different init. work
    int x = 7;
    int& r {x}; //binds r to x, r being a reference
    r = 9; //replaces the value of reference in mem. with 9

    std::cout << "Orginal: " << x << " Replacement: " << r << "\n";
 
    return 0;
}