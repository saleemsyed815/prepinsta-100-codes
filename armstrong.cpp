//Program to check whether the given number is a Armstrong Number or not
// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)
// Example = 153 (order/length = 3)
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

#include<iostream>
#include<math.h>

int order(int x);

bool armstrong(int num, int len);

int main ()
{
    int num, len;
    
    std::cout<<"Enter the number: ";
    std::cin>>num;
 
    len = order(num);
    
    if (armstrong(num, len))
        std::cout << num << " is armstrong";
    else
        std::cout << num << " is not armstrong";

    return 0;
}

int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

bool armstrong(int num, int len){

    int sum = 0, temp, digit;
    temp = num;
    
    while(temp != 0)
    {
        digit = temp % 10;

        sum = sum + pow(digit,len);
        
        temp /= 10;
    };

    return num == sum;
}