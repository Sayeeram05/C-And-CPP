#include <iostream>
using namespace std;

int main()
{
    int num,temp,sum = 0;
    cout<<"Enter a number to find sum of the digits : ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout<<"sum of the digits of "<<num<<" = "<<sum;
    return 0;
}