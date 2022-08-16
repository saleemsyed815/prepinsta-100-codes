//Program to find the greatest among 3 numbers
//we are using an inbuilt max function here

#include<iostream>

int main(){
    int number1, number2, number3;

    std::cout<<"Enter number1: "<<'\n';
    std::cin>>number1;
    std::cout<<"Enter number2: "<<'\n';
    std::cin>>number2;
    std::cout<<"Enter number3: "<<'\n';
    std::cin>>number3;
    
    int result = std::max(number1, std::max(number2, number3));
    
    std::cout<<"The Greatest number among "<<number1<<" , "<<number2<<" & "<<number3<<" is: "<<'\n'<<result;
    
    return 0;
}