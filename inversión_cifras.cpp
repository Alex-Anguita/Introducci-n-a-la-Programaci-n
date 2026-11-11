#include <iostream>
#include <math.h>
int main(){
    int n = 0, inverso = 0, divisor = 0;
    std::cout<<"Entra un numero entero y te dare su inverso: ";
    std::cin>>n;
    for(int i = 0; i <= 3; i++){
        divisor = pow(10,i);
        inverso = (n/divisor)%10;
        std::cout<<inverso;
    }
    std::cout<<"\n";
}