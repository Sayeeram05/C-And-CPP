#include <stdio.h>

int main()
{
    int x = 0 , y = x+1 , l=3 , n;
    printf("Enter a length of the fibonacci series : ");
    scanf("%d",&n);
    if(n>=1)
    {
        printf("%d ",x);
    }
    if(n>=2)
    {
        printf("%d ",y);
    }
    while(l<=n)
    {
        int f = x + y;
        printf("%d ",f);
        x = y;
        y = f;
        l++;
    }
}