#include <iostream>

//seperate classes for each enum, different objects


//used to make code less likly to be error prone and more readable
enum class Color {red, blue, green};
enum class Traffic_light {green, yellow, red, blue};

/**
 * @brief Sets the light to the next "light"
 * 
 * @param t The light being increment 
 * @return Traffic_light& 
 */
Traffic_light& operator++(Traffic_light& t){

    switch(t){
        case Traffic_light::green: return t=Traffic_light::yellow;
        case Traffic_light::yellow: return t=Traffic_light::red;
        case Traffic_light::red: return t=Traffic_light::green;
        default: return t=Traffic_light::blue;
    }

}

//Class after enum means the enum is strongly typed and scoped


//however we cannot mix different types of enum classes
/*
 *  Color x = red //no scope 
 *  Color y = Traffic_light::red //not of type color, therefore error
 *  Color z = Color::red //Same scope therefore fine
 *  int i = Color::red //doesn't work a int is not a Color 
 *  Color c = 2 Color is not an int 
 * 
 */

//seperate objects but still have essentially the same properties
Color col = Color::red;  
Traffic_light light = Traffic_light::red;


int main(){
    ++light; //the operator sets the light to the next light
    
    if(light == Traffic_light::green){
        std::cout << "The light is now green" << "\n";
    }else{
        std::cout << "The light is not green" << "\n";
    }
}