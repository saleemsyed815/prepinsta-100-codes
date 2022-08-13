//Program to Check whether the number is even or odd

#include<iostream>

int main(){
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    
    num%2 == 0 ? std::cout<<"Even" : std::cout<<"Odd";
    
    return 0;
}