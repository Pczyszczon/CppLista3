#include <iostream>
#include "equation.hpp"

int main(){
    
    delta_exception ex;
    
    equation test(1,10,1);
    unsigned int a=1;
    
    try{
        std::cout<<test.zeros(a, ex);
    }
    catch(std::exception& e){
        std::cout<<e.what();
    }
    return 0;
}
