#include <iostream>
using namespace std;

void  num_txt(int num)
{
    int temp,rev = 0;
    temp = num;
    while(temp>0)
    {
        rev = (rev*10) + (temp%10);
        temp /= 10;  
    }

    while(rev>0)
    {
        temp = rev % 10;
        rev /= 10 ;
        switch(temp)
        {
            case 1:
            cout<<"One ";
            break;
            case 2:
            cout<<"Two ";
            break;
            case 3:
            cout<<"Three ";
            break;
            case 4:
            cout<<"Four ";
            break;
            case 5:
            cout<<"five ";
            break;
            case 6:
            cout<<"Six ";
            break;
            case 7:
            cout<<"Seven ";
            break;
            case 8:
            cout<<"Eight ";
            break;
            case 9:
            cout<<"Nine ";
            break;
            case 0:
            cout<<"zero ";
            break;
        } 
    }
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    num_txt(num);
    return 0;
}