//Program to find the power of the number without using in-built function

#include<iostream>

int main(){
    int number, power;
    
    std::cout<<"Enter the number:"<<'\n';
    std::cin>>number;
    
    std::cout<<"Enter the power: "<<'\n';
    std::cin>>power;
    
    int result=1;
    
    while(power){
        result = result*number;
        power--;
    }
    
    std::cout<<result;
    
    return 0;
}