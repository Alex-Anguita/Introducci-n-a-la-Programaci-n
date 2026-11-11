#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 100
int flip();
int main(){
    flip();
}
int flip(){
    srand(time(NULL));
    int resultado = 0, contador = 0;
    for(int i = 1; i <= N; i++){
        resultado = rand()%2;
        if(resultado == 0){
            std::cout<<"Lanzamiento "<<i<<": "<<resultado<<std::endl;
        }
        else{std::cout<<"Lanzamiento "<<i<<": "<<resultado<<std::endl; contador++;}
    }
    std::cout<<"Ha salido cara "<<contador<<" veces"<<std::endl;
    return resultado;
}