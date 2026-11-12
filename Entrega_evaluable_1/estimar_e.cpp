#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;   
cpp_int factorial(int n);
double estimar_e(int n);
int main(){
    int n=1;
    double numero_e;
    std::cout<<"Introduce el numero de terminos de la suma para estimar e: ";
    std::cin>>n;
    numero_e = estimar_e(n);
    std::cout<<"El numero e es: "<<numero_e<<std::endl;
}
double estimar_e(int n){
    double e = 0.0;
    int contador = 0, limite;
    limite = n;
    while(contador <= limite){
        e += 1.0/factorial(contador).convert_to<long double>();
        contador++;
    }
    return e;
}
cpp_int factorial(int n){
    cpp_int factorial=1;
    while(n>1){
            factorial *=  n;
            n--;
    }
    return factorial;
}