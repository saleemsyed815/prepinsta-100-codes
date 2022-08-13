//Program to Check whether the number is positive or negative

#include<iostream>

int main(){
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    
    num>=0 ? std::cout<<"Positive" : std::cout<<"Negative";
    
    return 0;
}