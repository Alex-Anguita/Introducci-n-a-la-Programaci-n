#include <iostream>
#include <math.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
cpp_int factorial(int n);
double estimar_e(double x, int n);
int main(){
    double e = 0,x;
    int n=1;
    std::cout<<"Entra el numero de terminos de la suma: "<<std::endl;
    std::cin >> n;
    std::cout<<"Entra el valor de x: "<<std::endl;
    std::cin >> x;
    e = estimar_e(x,n);
    std::cout<<"Aproximacion de e elevado a x: "<<e<<std::endl;
}
double estimar_e(double x, int n){
    double e = 0.0;
    int contador = 0, limite = n;
    while(contador < limite){
        e+=pow(x,contador)/factorial(contador).convert_to<long double>();
        contador++;
    }
    return e;
}
cpp_int factorial(int n){
    cpp_int factorial = 1;
    while(n>1){
        factorial *= n;
        n--;
    }
    return factorial;
}