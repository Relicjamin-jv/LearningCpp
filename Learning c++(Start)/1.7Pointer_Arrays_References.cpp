#include <iostream>
#include <vector>

int v[6]; //an array of 6 characters
int *p; //pointer

void sort(std::vector<double>& v); //by passing this by reference we make sure it does not make copy of the vector and works directly on the vector

double sum(const std::vector<double>&); //const doesnt allow us to modify an argument while "&" still allows for no copying to happen

int main(){

    for (int i = 0; i != 5; i++){
        v[i] = i;
    }

    p = &v[2]; //the pointer p is pointing to that value of v[2] (reference to) cannot refer to a different obj. after init;
    std::cout << "printing the pointer value to v[2]: " << *p << "\n";
    std::cout << "printing the address value to v[2]: " << p << "\n";
    return 0;
}