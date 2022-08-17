//Program to find the factorial of the given number

#include<iostream>

int factorial(int number);

int main(){
    int number;
    
    std::cout<<"Enter the Number: "<<'\n';
    std::cin>>number;
    
    std::cout<<"The Factorial of "<<number<<" is: "<<factorial(number);
    
    return 0;
}

int factorial(int number){
    if (number == 0)
        return 1;
    
    return number * factorial(number - 1);
}