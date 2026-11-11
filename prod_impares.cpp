#include <iostream>
#define N 15
int main(){
    int prod = 1;
    for(int i = 0; i <= N; i++){
        if(i%2!=0){
            prod *= i;
        }
    }
    std::cout<<"El producte es "<<prod<<std::endl;
}