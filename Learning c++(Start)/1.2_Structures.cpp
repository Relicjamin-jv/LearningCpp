#include <iostream>


struct Vector{
    int sz; //number of elements
    double *elem; //where those elements are
};

void vector_init(Vector& v, int size){
    v.elem = new double[size];
    v.sz = size;
}


void f(Vector v, Vector& rv, Vector* pv){
    int i1 = v.sz; //access through name
    int i2 = rv.sz; //access thorugh reference
    int i3 = pv->sz; //access through pointer

    std::cout << "get the size and display\n";
    std::cout << "Through name: " << i1 << " Through reference: " << i2 << " Through pointer: " << i3 << std::endl;
}

int main(){
    Vector v;
    vector_init(v, 5); //allocated 5 doubles to vector v

    std::cout << "Enter 5 numbers\n";
    for(int i = 0; i < v.sz; i++){
        std::cin >> v.elem[i];
    }

    double sum = 0;

    for(int i = 0; i < v.sz; i++){
        sum += v.elem[i];
    }

    std::cout << "The sum of the inputted numbers is " << sum << std::endl;

    std::cout << "Testing accessing thorugh differenct ways(reference, pointer, name) " << std::endl;

    Vector* vp = &v; //getting the address of v and setting it to a pointer
    Vector& va = v; //getting the address of v and setting it to a reference

    f(v, va, vp);

    return 0;
}