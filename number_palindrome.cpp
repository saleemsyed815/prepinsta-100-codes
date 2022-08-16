//Program to chack whether the number is palindrome or not

#include<iostream>

int isPalindrome(int number, int reverse);

int main(){
    int number, reverse = 0;
    
    std::cout<<"Enter the number: ";
    std::cin>>number;
    
    int result = isPalindrome(number, reverse);
    
    if(result == number)
        std::cout<<"The Given Number "<<number<<" is a Palindrome";
    else
        std::cout<<"the Given Number "<<number<<" is not a Palindrome";
    
    return 0;
}

int isPalindrome(int number, int reverse){
    if (number == 0)
        return reverse;
    
    reverse = reverse*10 + number%10;
    
    return isPalindrome(number/10, reverse);
}