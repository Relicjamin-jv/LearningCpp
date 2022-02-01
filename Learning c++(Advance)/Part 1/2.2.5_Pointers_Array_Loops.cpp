
#include <iostream>
using namespace std;

int v[6] = {0,1,2,3,4,5}; //array of 6, 0->6
int* p;  //pointer, "contents off", it is wise to check whether the pointer is actually point to something when it being used

void copyfor(){
    int v1[6]; //storage to hold the copy contents

    for(auto i=0; i!=6; ++i){ //simple for loop like a lot of other programming langs
        v1[i] = v[i];
    }
}

int count_x(char* p, char x){
    //count is the number of references in p[]
    //p is assimed to point to a zero termiunated array of char
    if(p==nullptr) return 0; //checks to see if the pointer is actually point to something the wise way of doing it.
    int count = 0;
    for(; *p!=0; p++){
        if(*p == x){
            ++count;
        }
    }
    return count;
}

void simpleFor(){
    cout << "Simple x:v\n";
    for(auto x:v){  //for every element of v, from the first to the last place a copy of x and print it. This makes a copy.
        cout << x;
    }
    cout << "\n";
    cout << "Simple x:{array}\n";
    for(auto x : {52, 87, 23, 45, 675, 21}){ //for every element of the give array, from the first to the last place a copy of x and print it. This makes a copy.
        cout << x << ", ";
    }
    cout << "\n";
    cout << "Refernce for loop and just interates the pointer\n";
    for(auto& x : v){ // & is a "reference to", similar to a pointer execept no * is needed to access the contents of the refered reference. Cannot be made to reference a different
        ++x;          // obj once init.
        cout << x;
    }
    cout << "\n";
}

/*
T a[n]; // T[n]: array of n Ts (§7.3)
T∗ p; // T*: pointer to T (§7.2)
T& r; // T&: reference to T (§7.7)
T f(A); // T(A): function taking an argument of type A returning a result of type T (§2.2.1)
*/

int main(){
    simpleFor();

    //testing for char_count
    char c_string[5] = {'a', 'a', 'a', 'b', '\0'};
    char* pointer = &c_string[0];
    int count = count_x(pointer, 'a');

    cout << "The count is: " << count;
}