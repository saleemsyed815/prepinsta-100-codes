//Program to print prime numbers within the given range

#include<iostream>
#include<math.h>

int prime(int n);

int main(){
    int lower_limit, upper_limit;
    
    std::cout<<"Enter the starting point: ";
    std::cin>>lower_limit;
    
    std::cout<<"Enter the ending point: ";
    std::cin>>upper_limit;
    

    for(int i = lower_limit; i <= upper_limit; i++)
        if(prime(i))
            std::cout<<i<< " ";
    
    return 0;
}

int prime(int n){
    int flag = 0;
    
    if( n < 2)
        return false;
        
    for(int i = 2; i < sqrt(n); i++)
        if(n%i == 0)
            return false;
            
    return true;
}
