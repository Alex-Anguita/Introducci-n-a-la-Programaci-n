#include <iostream>

int main(){
    int n,factorial = 1;
    std::cout<<"Dime un numero y calculare su factorial: ";
    std::cin>>n;
    while(n > 1){
        factorial *=  n;
        n--;
    }
    std::cout<<"El factorial es "<<factorial<<std::endl;
}