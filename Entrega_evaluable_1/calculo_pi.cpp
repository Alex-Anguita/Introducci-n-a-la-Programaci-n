#include <iostream>
#include <iomanip>
#define N 200000
long double calcular_pi(int n);
int main(){
    long double pi = 0;
    std::cout<<"Termino\t pi "<<std::endl;
    pi = calcular_pi(N);
    return 0;
}
long double calcular_pi(int n){
    int contador=0, num_termino = 0, termino = 0;
    long double pi = 0;
    for(int i = 0; i < n*2; i++){
        std::cout<<std::fixed<<std::setprecision(8);
        if(i%2!=0 && contador%2==0){
            num_termino++;
            pi += 4.0L/i;
            std::cout<<num_termino<<"      "<<pi<<std::endl;
            contador++; 
        }
        else if(i%2!=0 && contador%2!=0){
            num_termino++;
            pi -= 4.0L/i; 
            std::cout<<num_termino<<"      "<<pi<<std::endl;
            contador++;
        }
        if(termino == 0 && pi >= 3.14159L && pi < 3.14160L){
            termino = num_termino;
        }
    }
    std::cout<<"Se deben usar "<<termino<<" terminos para estimar el valor 3.14159"<<std::endl;
return pi;
}
