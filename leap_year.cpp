//Program to chaeck whether the year is leap year or not
//for a leap year ---- the year should be divisible by 400   or 
//                      the year should be divisible by 4 and not divisible by 100

#include<iostream>

int main(){
    int year;
    
    std::cout<<"Enter the year"<<'\n';
    std::cin>>year;
    
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        std::cout<<"The year "<<year<<" is a leap year";
        
    else
        std::cout<<"The year "<<year<<" is not a leap year";
        
    return 0;
}