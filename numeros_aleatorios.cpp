#include <iostream>
#include <ctime>
#include <cstdlib>
int main(){
    //Formula: (max-min+1)+min
    int n;
    srand(time(NULL));
    n = rand()%2 + 1;
    std::cout<<n<<std::endl;
    n = rand()%100 + 1;
    std::cout<<n<<std::endl;
    n = rand()%10;
    std::cout<<n<<std::endl;
    n = rand()%113 + 1000;
    std::cout<<n<<std::endl;
    n = rand()%3-1;
    std::cout<<n<<std::endl;
    n = rand()%15-3;
    std::cout<<n<<std::endl;
    
}