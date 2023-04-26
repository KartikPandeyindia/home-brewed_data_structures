// This is the driver function. It has no other purpose than to check the DS.
#include <iostream>
#include <string>

unsigned int bitarr [96] = {0};

int hash(char c) {
    return int(c) - 32;
}

void in(char c) {
    bitarr[hash(c)] = 1;
}

void setClear() {
    for(int i = 0; i < 3; i++)
    bitarr[i] = 0;
}

bool contains(char c) {
    if ( bitarr[hash(c)] )
        return true;
    return false;
}

int main()
{
    std::string s = "asdfakml     k34524-=-";

    for (char o : s) {
        in(o);
    }

    for(char o : s) {
        std::cout << o;
        if (contains(o))  std::cout << " = yes"; 
        else    std::cout << " = no";
        std::cout << std::endl;
    }

    for (int i : bitarr) {      
        std::cout << i ;
    }

    return 0;
}