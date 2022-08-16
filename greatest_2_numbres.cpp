//Program to find the greatest among 2 numbers

#include<iostream>

int main(){
    int number1, number2;
    
    std::cout<<"Enter number1: "<<'\n';
    std::cin>>number1;
    std::cout<<"Enter number2: "<<'\n';
    std::cin>>number2;
    
    if(number1==number2)
        std::cout<<"The numbers "<<number1<<" , "<<number2<<" are equal"<<'\n';
        
    else if(number1>number2)
        std::cout<<"The greatest number among "<<number1<<" , "<<number2<<" is: "<<number1;
        
    else
        std::cout<<"The greatest number among "<<number1<<" , "<<number2<<" is: "<<number2;
    
    return 0;
}
    