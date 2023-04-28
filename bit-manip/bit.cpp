//Driver function and some modules which are helpful in Bit Manipulations
#include <iostream>

//FUNC : Console displays the bits of an integral data. 
//~requires <iostream> !64-bit broke
template <typename data>
void reveal_bits(data x) {    
    for  ( int i = (sizeof(x) * 8) - 1; i >= 0 ; i-- )
        if (x & (1 << i))   std::cout << '1';
        else std::cout << '0';
        std::cout << std::endl;
}

#define move 2
#define pos 23  //![0 - 94]
int main () {

    //It is highly advisable to use `u_int32_t` for your bit-needs. Refer notes
    u_int32_t x = 412576;   reveal_bits(x);
    u_int32_t y = 8759763;  reveal_bits(y);

    //Bit Operations
    reveal_bits(x & y); //AND
    reveal_bits(x | y); //OR
    reveal_bits(x ^ y); //XOR
    reveal_bits(~x);    //NOT

    //Bit shifts
    reveal_bits(1);
    reveal_bits(1 << move);
    reveal_bits(64);
    reveal_bits(64 >> move);

    //Bit Array 
    //--[96] bits
    u_int32_t barr[3] = {0};
    int w = sizeof(barr[0]) * 8; 
    
        //setting a bit at pos [OR]
        barr[pos / w] |= (1 << (pos % w));
        reveal_bits(barr[pos / w]); 

        barr[0] = 4294967295;
        //clearing a bit [NAND]
        barr[pos / w] &= ~(1 << (pos % w));
        reveal_bits(barr[pos / w]); 
        
        //flipping a bit at pos [XOR]
        barr[pos / w] ^= (1 << (pos % w));
        reveal_bits(barr[pos / w]); 
        

    return 0;
}