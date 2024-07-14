#include <iostream>
using namespace std;

int main()
{
    int a1 = 0 , a2 = 1 , l = 3,n,f;
    cout<<"Enter the length of fibonacci series : ";
    cin>>n;
    if(n>=1)
    {
        cout<<a1<<" ";
    }
    if(n>=2)
    {
        cout<<a2<<" ";
    }
    while(l<=n)
    {
        f = a1 + a2;
        cout<<f<<" ";
        a1 = a2;
        a2 = f;
        l++;
    }
    return 0;
}