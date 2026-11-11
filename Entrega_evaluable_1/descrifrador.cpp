#include<iostream>
#include<math.h>
int main(){
    int n, aux,contador = 0;
    int numero_descifrado[4];
    std::cout<<"Introduce un número de 4 cifras para desencriptar: ";
    std::cin>>n;
    for(int i = 0; i <=3; i++){
        int divisor = pow(10,i);
        int digito = (n/divisor)%10; //Aislamos las cifras
        int digito_original = (digito-7+10)%10;
        numero_descifrado[i] = digito_original;
    }
    aux = numero_descifrado[2];
    numero_descifrado[2] = numero_descifrado[0];
    numero_descifrado[0] = aux;
    aux = numero_descifrado[3];
    numero_descifrado[3] = numero_descifrado[1];
    numero_descifrado[1] = aux;
    for(int i = 0; i <=3; i++){
        std::cout<<numero_descifrado[i];
    }
    std::cout<<"\n";
    std::cout<<"\n";
}