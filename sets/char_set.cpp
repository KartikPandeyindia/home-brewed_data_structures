// A set DS of chars

#define SIZE 3
class charSet
{
private:
    unsigned int barr[SIZE] = {0};
    unsigned int w = sizeof(barr[0]) * 8;
    unsigned int cnt = 0;

    int hfn(char c)
    {
        return int(c) - 32;
    }

public:
    charSet() {}

    ~charSet() {}

    bool in(char c)
    { // checking and adding
        int pos = hfn(c);

        if ((barr[pos / w] & (1 << (pos % w))) != 0)
            return true;
        barr[pos / w] |= (1 << (pos % w));
        cnt++;
        return false;
    }

    void clearSet()
    { // Cleared bit array
        for (int i = 0; i < SIZE; i++)
            barr[i] = 0;
        cnt = 0;
    }

    int count()
    { // returns set bits in bit array

        return cnt;
    }
};

#include <iostream>
#include <string>
int main()
{
    charSet setC;
    std::string s = "asdfakml     k34524-=-";

    for (char o : s)
    {
        if (!setC.in(o))
            std::cout << '1';
        else
        {
            std::cout << "+" << setC.count() << "+";
            std::cout << '0';
            setC.clearSet();
        }
    }
    return 0;
}