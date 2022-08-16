//Program to reverse a given number
//2134%10 = 4
//reverse = 0*10 + 4 = 4
//2134/10 = 213
//213%10 = 3
//reverse = 4*10 + 3 = 43      (repeat)

#include<iostream>

int reverseNumber(int number, int reverse);

int main(){
    int number, reverse = 0;
    
    std::cout<<"Enter the number: "<<'\n';
    std::cin>>number;
    
    int result = reverseNumber(number, reverse);
    
    std::cout<<"The reverse of "<< number <<" is: "<<'\n'<<result;
    
    return 0;
}

int reverseNumber(int number, int reverse){
    if(number == 0)
        return reverse;
        
    reverse = reverse*10 +number%10;
    
    reverseNumber(number/10, reverse);
}

