#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;

    num1 += num2;
    num2 = num1 - num2;
    num1 = num1 -num2;
    cout<<"After swaping of first and second number\nFirst number = "<<num1<<"\nSecond number = "<<num2;
    return 0;
}