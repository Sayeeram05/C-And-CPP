#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x,temp;
    cout<<"Enter to check palindrome or not : ";
    cin>>x;
    int len = x.size();
    for(int i = len-1 ; i>=0 ; i--)
    {
        temp = temp + x[i];
    }
    if(x==temp)
    {
        cout<<x<<" is a palindrome"<<endl;
    }
    else
    {
        cout<<x<<" is not a palindrome"<<endl;
    }
    

}