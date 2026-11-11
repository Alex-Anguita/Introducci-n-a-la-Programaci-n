#include<iostream>
#include<math.h>
int main(){
    int n, aux;
    int numero_cifrado[4];
    std::cout<<"Introduce un número de 4 cifras: ";
    std::cin>>n;
    for(int i = 0; i <=3; i++){
        int divisor = pow(10,i);
        int digito = (n/divisor)%10; //Aislamos las cifras
        int digito_cifrado = (digito+7)%10;
        numero_cifrado[i] = digito_cifrado;
    }
    aux = numero_cifrado[0];
    numero_cifrado[0] = numero_cifrado[2];
    numero_cifrado[2] = aux;
    aux = numero_cifrado[1];
    numero_cifrado[1] = numero_cifrado[3];
    numero_cifrado[3] = aux;
    for(int i = 0; i <=3; i++){
        std::cout<<numero_cifrado[i];
    }
    std::cout<<"\n";
}