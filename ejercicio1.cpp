#include <iostream>
int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z;
    z=subtraction(7,2);
    std::cout<< "The first result is " <<z<<"\n";
    std::cout<< "The memori location is" <<&z<<std::endl;
    std::cout<< "The second result is " <<subtraction(7,2)<<"\n";
    
    std::cout<< "The third result is " <<subtraction(x,y)<<"\n";
    
    z=4+subtraction(x,y);
    std::cout<< "The memori location of z is" <<&z<<std::endl;
    std::cout<< "The memori location of x is" <<&x<<std::endl;
    std::cout<< "The memori location of y is" <<&y<<std::endl;
    std::cout<< "The fourth result is " <<z<<"\n";
    std::cout<< "The memori location of z again is" <<&z<<std::endl;
    return 0;
}