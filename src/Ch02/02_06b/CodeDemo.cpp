// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000 //directives don't end in ;
#define DEBUG //unless defined 14 - 16 will be grayed out and "[About to perform this addtion]" will not show

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37; //unsinged, can't be negative
    #ifdef DEBUG
    std::cout << "[About to perform this addtion]" << std::endl;
    #endif
    large += small; 
    std::cout << "This  large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
