//Program to print Fibonacci series upto N term
//Fibonacci --- It is a series in which any number in the series is the direct sum of previous two numbers in the series
//Ex --- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

#include<iostream>

int main(){
    int n, next;
    
    std::cout<<"Enter the number: "<<'\n';
    std::cin>>n;
    
    int a=0, b=1;
    
    std::cout<<a<<", "<<b<<", ";
    
    for(int i=2; i<n; i++){
        next = a + b;
        a = b; 
        b = next;
        std::cout<<next<<", ";
    }
    
    return 0;
}