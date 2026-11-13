#include <iostream>
void hanoi(int n, int origen, int auxiliar, int destino){
    if (n == 1){
        std::cout<< "Mover disco " <<n<<" de "<< origen<< " a "<< destino<<std::endl;
    }
    else{
        hanoi(n-1, origen, destino, auxiliar);
        std::cout<< "Mover disco " <<n<<" de "<< origen<< " a "<< destino<<std::endl;
        hanoi(n-1, auxiliar, origen, destino);
    }
}

int main(){
    int n;
    std::cout<<"Introduce el numero de discos: ";
    std::cin>>n;
    hanoi(n, 1, 2, 3);
    return 0;
}