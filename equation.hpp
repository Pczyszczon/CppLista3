#include <iostream>
#include <cmath>

class delta_exception: public std::exception
{
    virtual const char* what() const throw()
    {
        return "Delta equals less than zero";
    }
};

class equation{
    public:
        int a;
        int b;
        int c;
    equation(int val_a, int val_b, int val_c){
        a = val_a;
        b = val_b;
        c = val_c;
    }
    equation(){
        a = 0;
        b = 0;
        c = 0;
    }
    
    double zeros(unsigned int zero, delta_exception ex){
        double delta = std::pow(b,2)-(4*a*c);
        double x1;
        double x2;
        
        if(delta>0){
            x1 =  ( (-b) +( pow(delta,0.5)) )  / (2*a);
            x2 =  ( (-b) -( pow(delta,0.5)) )  / (2*a);
            
            if(zero==0){
                return (x1<x2)? x1:x2;
            }
            
            else{
                return (x1>x2)? x1:x2;
            }
            
        }
        else if(delta==0){
            return x1 = (-b)/(2*a);
        }
        else{
            throw ex;
        }
    }
};
