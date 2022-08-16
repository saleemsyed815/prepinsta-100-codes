//Program to find the sum of the digits of a givwn number
//The number is % then the remainder is added to sum
//The number is divided by 10 and process is repeated

#include<iostream>

int sumDigits(int n, int sum);

int main(){
    int number, sum = 0;
    
    std::cout<<"Enter the number: "<<'\n';
    std::cin>>number;
    
    std::cout<<"The sum of the digits is: "<<'\n'<<sumDigits(number, sum);
    
    return 0;
}

int sumDigits(int n, int sum){
    if(n == 0)
        return sum;
    
    sum += n % 10;
    
    return sumDigits(n/10, sum);
}