//Program to check whether the given number is prime number or not

#include<iostream>
using namespace std;

bool checkPrime(int n, int i)
{
    // 0, 1 and negative numbers are not prime
    if (n < 2)
        return false;

    // if this satisfies then its prime as we
    // have completed recursion from 2 to n
    if (i == n)
        return true;

    // Base cases
    if (n % i == 0)
        return false;

    i += 1;
    return checkPrime(n, i);
}

int main()
{
    int i = 2;
    bool isprime= true;
    
    int n;
    
    cout<<"Enter the number: ";
    cin>>n;
    
    isprime=checkPrime(n, i);
    
    string result = isprime ? "Prime":"not Prime";
    cout<< n << " is : "<< result;
    
    return 0;
}
