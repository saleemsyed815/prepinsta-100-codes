//Program to find the Factors of the Given Number

#include<iostream>

void factor(int number, int i);

int main(){
    int number;
    
    std::cout<<"Enter the Number: "<<'\n';
    std::cin>>number;
    
    std::cout<<"The factors of "<<number<<" are: "<<'\n';
    
    for(int i=1; i<=number; i++){
        factor(number, i);
    }
}

void factor(int number, int i){
    if(number%i == 0)
        std::cout<<i<<" ";
}