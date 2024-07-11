#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int d;
    cout<<"Enter the dimension of Square matrix (2,3,4..) : ";
    cin>>d;
    int m1[d][d] , m2[d][d] ;
    int ans[d][d];
    cout<<"Matrix one\n";
    for(int i = 0 ; i<d ; i++)
    {
        for(int j = 0 ; j<d ; j++)
        {
            cout<<"First Matrix ("<<i+1<<","<<j+1<<") = ";
            cin>>m1[i][j];
        }
    }
    cout<<"\nMatrix two\n";
    for(int i = 0 ; i<d ; i++)
    {
        for(int j = 0 ; j<d ; j++)
        {
            cout<<"Second Matrix ("<<i+1<<","<<j+1<<") = ";
            cin>>m2[i][j];
        }
    }
    for(int i = 0 ; i<d ; i++)
    {
        for(int j = 0 ; j<d ; j++)
        {
            ans[i][j] = 0;
            for(int k =0 ; k<d ; k++)
            {
               //cout<<i<<","<<j<<" = "<<m1[i][k]<<" * "<< m2[k][j]<<endl;;
               ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout<<"Multiplication of first and second matrix is"<<endl;
    for(int i = 0 ; i<d ; i++)
    {   
        for(int j = 0 ; j<d ; j++)
        {
            cout<<setw(2)<<setfill('0')<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}