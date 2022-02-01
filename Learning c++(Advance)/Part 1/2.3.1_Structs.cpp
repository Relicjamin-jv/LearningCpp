
#include <iostream>
using namespace std;
//organizing data into a struct to make a user defined data structure

/**
 * @brief first version of vector type
 * contains an int and a double.
 * 
 */
struct Vector{
    int sz;  //size
    double* elem;
};

/**
 * @brief modifies the Vector data type to be a certain s size.
 * 
 * @param v the vector data type
 * @param s the size of the double array
 * 
 * new operator allocates memory from the heap
 */
void vectorInit(Vector& v, int s){
    v.elem = new double[s]; //allocate an array of doubles
    v.sz = s;
}


/**
 * @brief returns the sum from cin.
 * 
 * @param s reads s intergers from cin
 * @return double
 */
double read_and_sum(int s){
    Vector v;
    vectorInit(v, s);
    cout << "Input a double " << s << " times\n";
    for(int i=0; i!=s; i++){
        cin>>v.elem[i]; //takes input from user and inputs it into vector
    }

    double sum = 0;
    for(int i=0; i!=s; i++){
        sum+=v.elem[i];     //gets the sum of all the elements
    }
    return sum;
}


int main(){
    double returnOutput = read_and_sum(5);
    cout << "The sum of the vector is: " << returnOutput << endl;
}

/**
 * void f(Vector v, Vector& rv, Vector* pv){
 *  int i1 = v.sz //accessing a struct through name
 *  int i2 = rv.sz //accessing a struct through reference
 *  int i3 = pv->sz //accesing a struct through pointer
 * }
 * 
 */