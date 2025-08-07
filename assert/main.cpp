// #define NDEBUG

// assert is a debugging macro that check if a condition true at runtime, 
// if condition is false : 
// Print an error message to stderr
// and Abort the program via abort()

#include <iostream>
#include <assert.h>

int main(){
    int age = -5;

    assert(age > 0 && "Invalid age");

    std::cout<<"Hello World !!"<<'\n';

}