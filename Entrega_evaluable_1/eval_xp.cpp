#include <iostream>
#include <math.h>
int main(){
    float x;
    x = fabs(7.5);
    std::cout<<x<<std::endl;
    x = floor(7.5);
    std::cout<<x<<std::endl;
    x = fabs(0.0);
    std::cout<<x<<std::endl;
    x = ceil(0.0);
    std::cout<<x<<std::endl;
    x = fabs(-6.4);
    std::cout<<x<<std::endl;
    x = ceil(-6.4);
    std::cout<<x<<std::endl;
    x = ceil(-fabs(-8+floor(-5.5)));
    std::cout<<x<<std::endl;
}