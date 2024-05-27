// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGHT 4            written out b/c const size_ AGE_LENGHT = 4 is recommend
// marco's have no scope, no ;
int main(){
   // int age[4]; written out b/c of AGE_LENGHT = 4

const size_t AGE_LENGHT = 4;      //local to function main

   int age[AGE_LENGHT];

float temperature[] = {31.5, 32.7, 28.9};  // no f at end so list of doubles

    age [0] = 25; //start at 0
    age [1] = 20;
    age [2] = 19;
    age [3] = 19;
    
  std::cout << "The Age array has " << AGE_LENGHT << " elements" << std::endl;
  std::cout << "Age [0] = " << age [0] << std::endl; 
  std::cout << "Age [1] = " << age [1] << std::endl; 
  std::cout << "Age [2] = " << age [2] << std::endl; 
  std::cout << "Age [3] = " << age [3] << std::endl; 
  std::cout << std::endl; 
  std::cout << "Temp[0] = " << temperature[0] << std::endl; 
  std::cout << "Temp[1] = " << temperature[1] << std::endl; 
  std::cout << "Temp[2] = " << temperature[2] << std::endl; 


    std::cout << std::endl << std::endl;
    return (0);
}