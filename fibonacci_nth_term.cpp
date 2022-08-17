//Program to find the Nth term in Fibonacci Series

#include<iostream>

int fibonacci(int n);

int main(){
    int n;
    
    std::cout<<"Enter the Nth Term: "<<'\n';
    std::cin>>n;
    
    std::cout<<fibonacci(n);
    
    return 0;
}

int fibonacci(int n){
    if (n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}