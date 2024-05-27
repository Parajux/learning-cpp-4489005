// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    std::cout << " float: " << 
    flt << std::endl;
    std::cout << " int: " << sgn << std::endl; // integers don't include fractions or decimals
    std::cout << "uint_32: " << unsgn << std::endl; // (2^32) - 7 = "4294967289"
 std::cout << "uint_32: " << (int32_t) unsgn << std::endl; // = -7

    std::cout << std::endl << std::endl;
    return (0);
}
