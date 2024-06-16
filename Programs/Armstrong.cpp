#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int num,temp,armstrong = 0;
    cout<<"Enter a number to check armstrong : ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        armstrong += pow(temp % 10,3);
        temp /= 10;
    }
    if(num == armstrong)
    {
        cout<<num<<" is a Armstrong number"<<endl;
    }
    else
    {
        cout<<num<<" is not a Armstrong number"<<endl;
    }
}