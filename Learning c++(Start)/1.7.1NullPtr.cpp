#include <iostream>



/**
 * @brief Count the number of occurrences of x in p[]
 * 
 * @param p the string
 * @param x the character we are looking for how many occurances of x in p
 * @return int 
 */
int count_x(const char* p, char x){
    if(p == nullptr) return 0; //the nullptr saying there is no object available

    int count = 0;

    for(; *p!=0; ++p){
        if(*p == x){
            ++count;
        }
    }
    return count;
}

/**
 * nullptr is used when there is no object to be referenced (or "no object available") 
 * 
 *  
 */
int main(){
    char const *nullPointer = nullptr; //how to init to a null ptr
    char const *notNullPointer = "hello"; //I believe we need the const because it makes just enough memory space for this string, buff overflow error

    int nullCount = count_x(nullPointer, 'a'); //looing for 'a' through a null prt, expected output is to be 0

    int notNullCount = count_x(notNullPointer, 'l'); //looking for 'l' through a not null pointer (a string), expected output 2 

    std::cout << "The null pointer count is: " << nullCount << " \nThe not null pointer count is: " << notNullCount << "\n";


    return 0;
}