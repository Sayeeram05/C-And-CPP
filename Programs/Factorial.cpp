#include <iostream>
using namespace std;

int main()
{
    int num,factorial = 1;
    cout<<"Enter a number to find factorial : ";
    cin>>num;
    for(int i = num ; i>0 ; i--)
    {
        factorial *= i;
    }
    cout<<"Factorial of "<<num<<" = "<<factorial;
}