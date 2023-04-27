//Bit Manipulation

#include <iostream>

#define SIZE 5

//bit array - 
unsigned int bitarr[SIZE] = {0};

int main () {

    std::cout << sizeof(u_int8_t);
    std::cout << sizeof(char);
    std::cout << sizeof(int);
    std::cout << sizeof(long);
    std::cout << std::endl;
    
    
    u_int8_t a = 1;
    int b = 1;

    a = a << 1;
    b = b << 1;

    std::cout << a << " @ " << b;

    return 0;
}