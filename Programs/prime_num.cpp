#include <iostream>
using namespace std;

int main()
{
    int x,check=0;
    cout<<"Enter a number to check prime or not : ";
    cin>>x;
    if(x==0 || x==1)
    {
        cout<<x<<" is not a prime";
        check = 1;
    }
    else if(x>=2)
    {
        int i = 2;
        while(i<x)
        {
            if(x % i == 0)
            {
                cout<<x<<" is not a prime";
                check = 1;
                break;
            }
            i++;
        }
    }
    else
    {
        cout<<"Invalid value";
        check = 1;
    }
    if(check==0)
    {
        cout<<x<<" is a prime number";
    }
    
}