//Program to print all the Armstroong Numbers in a given range

#include<iostream>
#include<math.h>

int degree(int num);

void armstrong(int low, int high);

int main(){
    int lower_limit, upper_limit;
    
    std::cout<<"Enter the starting point: "<<"\n";
    std::cin>>lower_limit;
    std::cout<<"Enter the ending point: "<<"\n";
    std::cin>>upper_limit;
    
    armstrong(lower_limit, upper_limit);
    
    return 0;
}

void armstrong(int low, int high){
    for(int i=low; i<=high; i++){
        int sum = 0, temp, digit, length;
        
        temp = i;
        
        length = degree(i);
        

        while(temp!=0){
            digit = temp%10;
            
            sum = sum + pow(digit, length);
            
            temp = temp/10;
        }
        if (sum == i)
            std::cout<<i<<" ";
    }
}

int degree(int num){
    int length = 0;
    
    while(num){
        length++;
        num = num/10;
    }
    
    return length;
}