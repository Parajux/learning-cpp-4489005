// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Enter your name: " << std::flush;
    std::getline(std::cin, str);
    std::cout << str << std::endl; 

    std::cout << std::endl << std::endl;
    return (0);

}
