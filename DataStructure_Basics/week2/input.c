#include <stdio.h>

int main()
{
    int a;char b;char c[10];
    printf("Number : ");
    scanf("%d",&a);
    printf("Letter : ");
    scanf("%c",&b),getchar();
    printf("Word : ");
    scanf("%s",c),getchar();
}