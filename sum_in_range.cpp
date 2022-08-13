//Program to Find sum of the numbers given in a Range

#include<iostream>

int sum(int num1, int num2);

int main(){
    int num1, num2;
    
    std::cout<<"Enter Lower Limit: "<<'\n';
    std::cin>>num1;
    
    std::cout<<"Enter Upper Limit: "<<'\n';
    std::cin>>num2;
    
    int total = sum(num1, num2);
    
    std::cout<<"Sum of the Numbers between "<<num1<<" and "<<num2<<" is : "<< total;
    
    return 0;
}

int sum(int num1, int num2){
    if(num2 > num1)
        return num2 + sum(num1, num2-1);    
}