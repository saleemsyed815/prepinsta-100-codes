//Program to find sum of first N numbers using Recursion

#include<iostream>

int sum(int number);

int main(){
    int num;
    
    std::cout<<"Enter the number till where you want the sum: "<<"\n";
    std::cin>>num;
    
    std::cout<<"Sum of First "<<num <<" Numbers is "<<sum(num);
}

int sum(int number){
    if(number > 0){
        return number + sum(number - 1);
    }
}
