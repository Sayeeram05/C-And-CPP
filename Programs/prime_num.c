#include <stdio.h>
int main()
{
    int a,check=0;
    printf("Enter a number to check prime or not : ");
    scanf("%d",&a);
    if(a==0 || a==1)
    {
        printf("%d is not a prime",a);
        check=1;
    }
    else if(a>1)
    {
        for(int i = 2 ; i<a ; i++)
        {
            if(a % i == 0)
            {
                printf("%d is a not a prime",a);
                check=1;
                break;
            }
        }
    }
    else
    {
        printf("Invalid value");
        check=1;
    }
    if(check==0)
    {
        printf("%d is a prime number",a);
    }
    
}
