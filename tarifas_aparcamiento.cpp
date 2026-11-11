#include <iostream>
#include <math.h>
float calculateCharge(float h);
int main(){
    float importe = 0, total_horas = 0, recaudacion = 0;
    float estacionamientos[3];
    std::cout<<"Entra el numero de horas del estacionamiento: "<<std::endl;
    for(int i = 0; i <=2; i++){
        std::cin>>estacionamientos[i];
    }
    system("clear");
    std::cout<<"Car\tHours\tCharge"<<std::endl;
    for(int i = 0; i <=2; i++){
        importe = calculateCharge(estacionamientos[i]);
        std::cout<<i+1<<"\t"<<estacionamientos[i]<<"\t"<<importe<<std::endl;
        total_horas += estacionamientos[i];
        recaudacion +=importe;
    }
    std::cout<<"TOTAL: "<<total_horas<<"\t"<<recaudacion<<std::endl;
}
float calculateCharge(float h){
    float importe = 0;
    importe = 20.0;
    if (h>3){
        importe+=5.0 * std::ceil(h-3);
    }
    if(importe > 50){
        importe = 50.0;
    }
    return importe;
}